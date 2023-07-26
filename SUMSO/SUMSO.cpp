#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string Process(string);

int main()
{
    string str;
    cin >> str;

    cout << Process(str);

    return 0;
}

string Process(string str)
{
    stringstream stream;
    int sum = 0;
    string temp = "";

    for (char c : str)
    {
        if (isdigit(c))
            temp += c;
        else
        {
            if (!temp.empty())
            {
                sum += stoi(temp);
                temp = "";
            }
        }
    }
    if (!temp.empty())
        sum += stoi(temp);
    stream << sum;
    return stream.str();
}
