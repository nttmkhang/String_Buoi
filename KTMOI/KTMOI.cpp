#include <iostream>
#include <sstream>
using namespace std;

string Process(char);

int main()
{
    char c;
    cin >> c;
    cout << Process(c);
    return 0;
}

string Process(char c)
{
    stringstream stream;
    char ch = tolower(c);
    stream << ch;
    return stream.str();
}