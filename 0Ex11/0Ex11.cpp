#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    FILE* pFile;
    int c;

    pFile = fopen("myfile.txt", "r");
    if (pFile)
    {
        do 
        {
            c = fgetc(pFile);
            if (isgraph(c)) 
                putchar(c);
        } 
        while (c != EOF);
        fclose(pFile);
    }
    return 0;
}