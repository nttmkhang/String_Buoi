#include <iostream>
#include <cstdlib>
#include <cctype>
using namespace std;

int main()
{
    char str[] = "1776";
    int year;

    if (isdigit(str[0]))
    {
        year = atoi(str);
        cout << "Year followed " << year << " was " << year + 1;
    }
    return 0;
}