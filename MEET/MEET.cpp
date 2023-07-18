#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void Nhap(string[], int&, char&);
string Process(string[], int, char);

int main()
{
    string str[100];
    int n;
    char c;
    Nhap(str, n, c);

    cout << Process(str, n, c);
    return 0;
}

void Nhap(string str[], int& n, char& c)
{
    cin >> n;
    cin >> c;
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        cin >> str[i];
    }
}

string Process(string str[], int n, char c)
{
    stringstream stream;
    for (int i = 0; i < n; i++)
    {
        int flag = 0;
        for (int j = 0; j < str[i].size(); j++)
            if (str[i][j] == c)
            {
                flag = 1;
                break;
            }
        if (flag == 0)
            stream << str[i] << endl;
    }
    return stream.str();
} 