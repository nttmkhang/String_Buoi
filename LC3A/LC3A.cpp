#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void Nhap(string[], string[], int&);
int KiemTra(string, string);
string Process(string[], string[], int&);

int main()
{
	string a[100];
	string b[100];
	int n;
	Nhap(a, b, n);
	cout << Process(a, b, n);
	return 0;
}

void Nhap(string a[], string b[], int& n)
{
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++)
	{
		getline(cin, a[i]);
		getline(cin, b[i]);
	}
}

int KiemTra(string a, string b)
{
    int m = a.size();
    int n = b.size();

	int dem = 0;
	int j = 0;
	for (int k = 0; k < n; k++) {
		if (j < m && b[k] == a[j]) {
			j++;
		}
		else {
			dem++;
		}
	}
	if (j == m)
		return dem;
	return -1;
}

string Process(string a[], string b[], int& n)
{
	stringstream stream;
	for (int i = 0; i < n; i++)
	{
		stream << "Case #" << i + 1 << ": ";
		int n = KiemTra(a[i], b[i]);
		if (n == -1)
			stream << "IMPOSSIBLE" << endl;
		else
			stream << n << endl;
	}

	return stream.str();
}