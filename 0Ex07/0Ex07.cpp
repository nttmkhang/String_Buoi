#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    int i = 0;
    char str[] = "C++";

    while (str[i])
    {
        if (isalpha(str[i]))
            cout << str[i] << " is alphabetic" << endl;
        else 
            cout << str[i] << " is not alphabetic" << endl;
        i++;
    }
    return 0;
}