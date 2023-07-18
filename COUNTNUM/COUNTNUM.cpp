#include <iostream>
#include <sstream>
#include <string>
using namespace std;

string Process(string);

int main()
{
    string s;
    getline(cin, s);
    cout << Process(s);
}

string Process(string s)
{
    stringstream stream;
    int dem = 0;
    int n = s.size();
    for (int i = 0; i < n - 1; i++)
        if (48 <= s[i] && s[i] <= 57 && !(48 <= s[i + 1] && s[i + 1] <= 57))
            dem++;
    if (48 <= s[n - 1] && s[n - 1] <= 57)
        dem++;
    stream << dem;
    return stream.str();
}