#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int toNumber(char);
string Process(string);

int main()
{
    string s;
    cin >> s;

    cout << Process(s);
    return 0;
}

int toNumber(char c)
{
    return int(c) - int('0');
}

string Process(string s)
{
    int sum = 0;
    for (int i = s.size() - 1; i >= 0; i--)
        if (isdigit(s[i]))
        {
            sum += toNumber(s[i]);
            s.erase(i, 1);
        }

    stringstream stream;
    stream << s << sum;
    return stream.str();
}