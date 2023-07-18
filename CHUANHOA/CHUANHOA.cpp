#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void Nhap(string[], int&);
string ChuanHoa(string&);
string ChuanHoaadv(string&);
string Process(string[], int);

int main()
{
    string str;
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        getline(cin, str);
        cout << ChuanHoaadv(str) << endl;
    }
	return 0;
}

void Nhap(string str[], int& n)
{
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++)
        getline(cin, str[i]);
}

string ChuanHoa(string& a)
{
    stringstream stream;
    bool isSpace = false;
    if (a[0] == ' ')
        a.erase(0, 1);
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == ' ')
        {
            if (!isSpace)
            {
                stream << a[i];
                isSpace = true;
            }
        }
        else
        {
            stream << a[i];
            isSpace = false;
        }
    }
    return stream.str();
}

string Process(string str[], int n)
{
    stringstream stream;
    for (int i = 0; i < n; i++)
    {
        stream << ChuanHoaadv(str[i]) << endl;
    }
    return stream.str();
}

string ChuanHoaadv(string& s)
{
    stringstream ss(s);
    string temp = "", ans = "";
    while (ss >> temp)
        ans += temp + " ";
    ans.pop_back();
    return ans;
}