#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	int i = 0;
	char str[] = "c3po...";

	while (isalnum(str[i])) 
		i++;

	cout << "The first " << i << " characters are alphanumeric" << endl;
	return 0;
}