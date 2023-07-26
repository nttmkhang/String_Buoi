#include <iostream>
#include <sstream>
#include <string>
using namespace std;

typedef string BigNum;

int DemChuSo(string);

int main()
{
	BigNum n;
	cin >> n;
	
	cout << DemChuSo(n);
	return 0;
}

int DemChuSo(string str)
{
	if (str[0] == '-')
		return  str.length() - 1;
	return str.length();
}