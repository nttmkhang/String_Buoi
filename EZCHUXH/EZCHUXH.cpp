#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string Process(const string& str);

int main() 
{
    string str;
    getline(cin, str);

    cout << Process(str);
    return 0;
}

string Process(const string& str)
{
    stringstream stream;
    int TanSuat[26] = { 0 };

    for (int i = 0; i < str.size(); i++)
        if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
            TanSuat[tolower(str[i]) - 'a']++;

    for (int i = 0; i < 26; i++)
        if (TanSuat[i] > 0) 
        {
            char c = 'a' + i;
            stream << c << ':' << TanSuat[i] << endl;
        }
    return stream.str();
}