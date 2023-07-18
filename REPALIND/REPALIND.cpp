#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void Nhap(string[], long long[], int&);
bool KTDoiXung(string);
string Process(string[], long long[], int);

int main()
{
	int n;
	string a[20];
	long long k[20];
	Nhap(a, k, n);
	cout << Process(a, k, n);
	return 0;
}

void Nhap(string a[], long long k[], int& n)
{
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++)
	{
		getline(cin, a[i]);
		cin >> k[i];
		cin.ignore();
	}
}

bool KTDoiXung(string str)
{
	int n = str.size();
	for (int i = 0; i < n / 2; i++)
		if (str[i] != str[n - i - 1])
			return false;
	return true;
}

string Process(string a[], long long k[], int n)
{
	stringstream stream;
	for (int i = 0; i < n; i++)
	{
		if (KTDoiXung(a[i]))
			stream << "YES" << endl;
		else
			stream << "NO" << endl;
	}
	return stream.str();
}