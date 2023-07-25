#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    int i = 0;
    int dem = 0;
    char str[] = "Hello, welcome!";

    while (str[i])
    {
        if (ispunct(str[i])) 
            dem++;
        i++;
    }
    cout << "Sentence contains " << dem << " punctuation characters.";
    return 0;
}