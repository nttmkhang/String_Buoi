#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void Nhap(string&);
string Process(string&);

int main()
{
	string a;
	Nhap(a);

	cout << Process(a);
	return 0;
}

void Nhap(string& a)
{
	getline(cin, a);
}

string Process(string& a)
{
	stringstream stream;
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] >= 65 && a[i] <= 90)
			a[i] += 32;
		stream << a[i];
	}
	return stream.str();
}