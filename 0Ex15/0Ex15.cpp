#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    int i = 0;
    char str[] = "Example to test isspace";

    while (str[i])
    {
        char c;
        c = str[i];
        if (isspace(c)) 
            c = '\n';
        putchar(c);
        i++;
    }
    return 0;
}