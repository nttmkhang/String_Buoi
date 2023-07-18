#include <iostream>
#include <sstream>
#include <string>
using namespace std;

typedef string BigNum;

string Process(string);

int main()
{
	BigNum n;
	cin >> n;
	
	cout << Process(n);
	return 0;
}

string Process(string str)
{
	stringstream stream;
	if (str[0] == '-')
	{
		stream << str.length() - 1;
		return stream.str();
	}
	stream << str.length();
	return stream.str();
}