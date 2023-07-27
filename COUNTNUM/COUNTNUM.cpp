#include <iostream>
#include <sstream>
#include <cctype>
#include <string>
using namespace std;

string Process(string);
int CountNumber(string);

int main()
{
    string s;
    getline(cin, s);

    cout << Process(s);
    return 0;
}

int CountNumber(string s)
{
    int dem = 0;
    unsigned int n = s.size();
    for (unsigned int i = 0; i <= n - 2; i++)
        if (isdigit(s[i]) && !isdigit(s[i + 1]))
            dem++;
    if (isdigit(s[n - 1]))
        dem++;
    return dem;
}


string Process(string s)
{
    stringstream stream;
    stream << CountNumber(s);
    return stream.str();
}