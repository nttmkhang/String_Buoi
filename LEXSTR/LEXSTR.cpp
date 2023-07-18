#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

bool ktHopLe(string);
string Process(string, int);

int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	cout << Process(s, n);
	return 0;
}

bool ktHopLe(string s, vector<int> a)
{
	int sum = 0;
	for (int x : a)
	{
		sum += x;
		if (x < 0)
			return false;
	}
	int DemDauHoi = 0;
	for (char x : s)
		if (x == '?')
			DemDauHoi++;
	if (sum != DemDauHoi)
		return false;
	return true;
}

string Process(string s, int n) 
{
	stringstream stream;
	vector<int> a;
	int x;
	for (int i = 0; i < 26; i++)
	{
		cin >> x;
		a.push_back(x);
	}
	for (int i = 0; i < n; i++)
	{
		if (s[i] != '?')
			a[int(s[i] - 'a')]--;
	}
	if (ktHopLe(s, a) == false)
	{
		stream << "-1";
		return stream.str();
	}

	int i = 0, j = 0;
	while (i < n)
	{
		while (s[i] != '?' && i < n)
			i++;
		while (a[j] == 0 && j < 25)
			j++;
		if (i < n)
			s[i] = char('a' + j);
		i++;
		a[j]--;
		if (a[j] == 0)
			j++;
	}
	stream << s;
	return stream.str();
}