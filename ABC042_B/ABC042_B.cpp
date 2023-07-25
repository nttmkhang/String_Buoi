#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;

string Xuat(vector<string>);
string Process(vector<string>);

int main()
{
    int n, l;
    cin >> n >> l;
    vector<string>s;
    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        s.push_back(temp);
    }

    cout << Process(s);
}

string Process(vector<string> s)
{
    sort(s.begin(), s.end());
    return Xuat(s);
}

string Xuat(vector<string> s)
{
    stringstream stream;
    for (unsigned int i = 0; i < s.size(); i++)
        stream << s[i];
    return stream.str();
}