#include <iostream>
#include <sstream>
using namespace std;
const int MOD = 1000000007;

string Process(string);

int main() {
    string s;
    cin >> s;

    cout << Process(s);
    return 0;
}

string Process(string s)
{
    stringstream stream;
    int dem = 1;
    long long kq = 1;
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == s[i - 1])
            dem++;
        else
        {
            kq = (kq * dem) % MOD;
            dem = 1;
        }
    }
    kq = (kq * dem) % MOD;

    stream << kq;
    return stream.str();
}