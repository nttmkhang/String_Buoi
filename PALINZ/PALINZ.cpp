#include <iostream>
#include <sstream>
using namespace std;

int ktDoiXung(string, int, int);
string Process(string, int);

int main()
{
    string s;
    cin >> s;
    int n;
    cin >> n;
    cout << Process(s, n);
    return 0;
}

int ktDoiXung(string s, int i, int j)
{
    int flag = 1;
    for (int k = 0; k < (float)(j - i) / 2; k++)
    {
        if (s[i - 1 + k] != s[j - 1 - k])
        {
            flag = 0;
            return flag;
        }
    }
    return flag;
}

string Process(string s, int n)
{
    stringstream stream;
    int i, j;
    for (int q = 0; q < n; q++)
    {
        cin >> i;
        cin >> j;
        int kq = ktDoiXung(s, i, j);
        if (kq == 1)
            stream << "YES" << endl;
        else
            stream << "NO" << endl;
    }
    return stream.str();
}