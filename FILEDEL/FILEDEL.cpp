#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;


int main()
{
    int n, q;
    cin >> n;
    cin >> q;
    vector<string> s;
    string temp;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        s.push_back(temp);
    }
    char c;
    for (int i = 0; i < q; i++)
    {
        cin >> c;
        for (int j = 0; j < s.size(); j++)
        {
            if (s[j].find(c) != string::npos)
            {
                s.erase(s.begin() + j);
                j--;
            }
        }
        cout << s.size() << endl;
    }
    return 0;
};