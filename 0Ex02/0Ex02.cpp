#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1 = "Test string: ";
	string str2;
	str2 = 'x';

	string str3 = str1 + str2;
	cout << str3 << endl;
	return 0;
}