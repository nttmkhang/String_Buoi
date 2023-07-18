#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

void Nhap(int, vector<string>&);
void SapXep(int, vector<string>&);
string Xuat(int, vector<string>);

int main()
{
    int n;
    cin >> n;
    int l;
    cin >> l;
    vector<string>s;
    Nhap(n, s);
    SapXep(n, s);
    cout << Xuat(n, s);
}

void Nhap(int n, vector<string>& s)
{
    string temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        s.push_back(temp);
    }
}

void SapXep(int n, vector<string>& s)
{
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (s[j].compare(s[i]) < 0)
                s[j].swap(s[i]);
}

string Xuat(int n, vector<string> s)
{
    stringstream stream;
    for (int i = 0; i < n; i++)
        cout << s[i];
    return stream.str();
}