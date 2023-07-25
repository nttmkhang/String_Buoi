#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    int i = 0;
    char str[] = "first line \n second line \n";

    while (isprint(str[i]))
    {
        putchar(str[i]);
        i++;
    }
    return 0;
}