#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "now step live...";

    string::reverse_iterator rp = str.rbegin();
    while (rp != str.rend())
    {
        cout << *rp;
        rp++;
    }
    return 0;
}