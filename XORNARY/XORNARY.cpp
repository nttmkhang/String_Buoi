#include<iostream>
#include<sstream>
#include<string>
using namespace std;

void Nhap(string&, string&);
string XuLyChuoi(string);
string Process(string, string);

int main()
{
	string a, b;
	Nhap(a, b);
	cout << Process(a, b);
	return 0;
}

void Nhap(string& a, string& b)
{
	cin >> a >> b;
}

string XuLyChuoi(string s)
{
	string ans = "";
	int i = 0;
	while (s[i] == '0')
		i++;
	int n = s.size();
	for (i; i < n; i++)
		ans += s[i];
	return ans;
}

string Process(string a, string b)
{
	stringstream stream;
	string temp = "";
	int n = a.size();
	for (int i = 0; i < n; i++)
		if (a[i] == b[i])
			temp += '0';
		else
			temp += '1';
	string ans = XuLyChuoi(temp);
	stream << ans;
	return stream.str();
}