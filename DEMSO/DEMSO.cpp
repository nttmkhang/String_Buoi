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
	int dem = 0;
	for (int i = 0; i < a.size() - 1; i++)
		if ((a[i] >= 48 && a[i] <= 57))
			if ((a[i + 1] >= 65 && a[i + 1] <= 90) || (a[i + 1] >= 97 && a[i + 1] <= 122))
				dem++;
	if (a[a.size() - 1] >= 48 && a[a.size() - 1] <= 57)
		dem++;
	stream << dem;
	return stream.str();
}