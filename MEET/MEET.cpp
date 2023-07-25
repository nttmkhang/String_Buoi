#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string Process();
bool ktThuoc(string, char);

int main()
{
    cout << Process();
    return 0;
}

bool ktThuoc(string s, char c)
{
    for (unsigned int i = 0; i < s.size(); i++)
        if (s[i] == c)
            return true;
    return false;
}

string Process()
{
    int n;
    cin >> n;
    char c;
    cin >> c;
    
    stringstream stream;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin.ignore();
        cin >> s;
        if (!ktThuoc(s, c))
            stream << s << endl;
    }
    return stream.str();
}