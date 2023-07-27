#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string Process(const string&);

int main() 
{
    string s;
    cin >> s;

    cout << Process(s);
    return 0;
}

string Process(const string& s)
{
    stringstream stream;
    int n = s.length();
    int ln = 0;
    int left, right;

    for (int i = 0; i < n; i++)
    {
        left = i;
        right = i;
        while (left >= 0 && right < n && s[left] == s[right])
        {
            int current = right - left + 1;
            ln = max(ln, current);
            left--;
            right++;
        }

        left = i;
        right = i + 1;
        while (left >= 0 && right < n && s[left] == s[right])
        {
            int current = right - left + 1;
            ln = max(ln, current);
            left--;
            right++;
        }
    }
    stream << ln;
    return stream.str();
}