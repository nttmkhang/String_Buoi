#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string Process(string);

int main()
{
	string a;
	cin >> a;
	cout << Process(a);
	return 0;
}

string Process(string a)
{
	stringstream stream;
	a[5] = ' ';
	a[13] = ' ';
	stream << a;
	return stream.str();
}