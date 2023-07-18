#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int toInt(char);
string Process(string);

int main()
{
    string s;
    cin >> s;
    cout << Process(s);
    return 0;
}

int toInt(char ch)
{
    return int(ch - '0');
}

string Process(string s)
{
    stringstream stream;
    int sum = 0;
    for (unsigned int i = 0; i < s.size(); i++)
        if (s[i] >= '0' && s[i] <= '9')
        {
            sum += toInt(s[i]);
            s.erase(i, 1);
            i--;
        }
    s += to_string(sum);
    stream << s;
    return stream.str();
}