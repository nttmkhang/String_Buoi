// UPWORD.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>
using namespace std;

string Process(string);

int main()
{
    string s;
    cin >> s;
    
    cout << Process(s);
    return 0;
}

string Process(string s)
{
    stringstream stream;
    int n = s.size();
    int dem = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if ((65 <= s[i] && s[i] <= 90) && (97 <= s[i + 1] && s[i + 1] <= 122))
            dem++;
    }
    if (65 <= s[n - 1] && s[n - 1] <= 90)
        dem++;
    stream << dem;
    return stream.str();
}