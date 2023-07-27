#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "Test string";

    string::iterator p = str.begin(); 
    while (p != str.end())
    {
        cout << *p;
        p++;
    }
    return 0;
}