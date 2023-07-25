#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "Lorem ipsum";

    for (auto it = str.cbegin(); it != str.cend(); ++it)
        cout << *it;
    cout << endl;

    return 0;
}