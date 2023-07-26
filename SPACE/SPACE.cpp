#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int DemKhoangTrang1(string);
int DemKhoangTrang2(string);

int main()
{
	int T;
	cin >> T;
	cin.ignore();
	string s;
	for (int i = 0; i < T; i++)
	{
		getline(cin, s);
		cout << DemKhoangTrang2(s) << endl;
	}
	return 0;
}

int DemKhoangTrang1(string s)
{
	int dem = 0;
	for (unsigned int i = 0; i < s.size() - 1; i++)
		if (s[i] == ' ' && s[i + 1] != ' ')
			dem++;
	if (s[s.size() - 1] == ' ')
		dem++;
	return dem;
}

int DemKhoangTrang2(string s)
{
	int dem = 0;
	int n = s.size();
	int i = 0;
	while (i < n && s[i] == ' ')
		i++;
	if (i != 0)
		dem++;
	while (i < n)
	{
		while (i < n && s[i] != ' ')
			i++;
		if (i < n)
			dem++;
		while (i < n && s[i] == ' ')
			i++;
	}
	return dem;
}