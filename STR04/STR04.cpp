#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void Nhap(string&);
bool KTNguyenTo(int);
string Process(string);

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

bool KTNguyenTo(int n)
{
	if (n <= 1)
		return false;
	if (n == 2)
		return true;
	if (n == 3)
		return true;
	if (n % 2 == 0)
		return false;
	if (n % 3 == 0)
		return false;
	for (long long i = 5; i * i <= n; i += 6)
		if ((n % i == 0) || (n % (i + 2) == 0))
			return false;
	return true;
}

string Process(string a)
{
	stringstream stream;
	int n = a.size();
	for (int i = 0; i < n; i++)
	{
		if (KTNguyenTo(i))
			a[i] = '*';
	}
	stream << a;
	return stream.str();
}