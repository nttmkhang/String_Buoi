#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    int i = 0;
    char str[] = "Example sentence to test isblank";

    while (str[i])
    {
        char c;
        c = str[i];
        if (isblank(c))
            c = '\n';
        putchar(c);
        i++;
    }
    return 0;
}