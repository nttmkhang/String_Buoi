#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    int i = 0;
    char str[] = "Test String.";

    while (str[i])
    {
        char c;
        c = str[i];
        if (islower(c)) 
            c = toupper(c);
        putchar(c);
        i++;
    }
    return 0;
}