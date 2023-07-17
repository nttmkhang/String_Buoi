#include <iostream>
#include <sstream>
using namespace std;

void Nhap(char[][200], int&, int&);
string Process(char[][200], int, int);

int main()
{
	char a[200][200];
	int m, n;
	Nhap(a, m, n);
	cout << Process(a, m, n);
	return 0;
}

void Nhap(char a[][200], int& m, int& n)
{
	cin >> m >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}


string Process(char a[][200], int m, int n)
{
	stringstream stream;
	int s = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] == '.' && a[i][j + 1] == '.')
				s++;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (a[j][i] == '.' && a[j + 1][i] == '.')
				s++;
	stream << s;
	return stream.str();
}


