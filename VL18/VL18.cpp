#include<iostream>
#include<sstream>
#include<string>
using namespace std;

string DaoChuoi(string);

int main()
{
	string s;
	cin >> s;
	cout << DaoChuoi(s);
	return 0;
}

string DaoChuoi(string s)
{
	int n = s.size();
	while (s[n - 1] == '0')
		n--;
	string temp = "";
	for (int i = n - 1; i >= 0; i--)
		temp += s[i];
	return temp;
}