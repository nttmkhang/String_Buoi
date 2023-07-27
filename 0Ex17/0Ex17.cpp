#include <iostream>
#include <cstdlib>
#include <cctype>
using namespace std;

int main()
{
    char str[] = "ffff";
    long int n;

    if (isxdigit(str[0]))
    {
        n = strtol(str, NULL, 16);
        cout << "The hexadecimal number: " << n;
    }
    return 0;
}