#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string Process(string);

int main() 
{
    string s;
    cin >> s;

    cout << Process(s) << endl;

    return 0;
}

string Process(string s)
{
    stringstream stream;
    int n = s.length();
    string t = "";

    for (int len = 1; len <= n / 2; len++)
    {
        if (n % len == 0)
        {
            t = s.substr(0, len);
            int k = n / len;
            string temp = "";

            for (int i = 0; i < k; i++)
                temp += t;

            if (temp == s)
            {
                stream << to_string(k) + t;
                return stream.str();
            }
        }
    }
    stream << '1' + s;
    return stream.str();
}