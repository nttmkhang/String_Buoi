#include<iostream>
#include<sstream>
#include<string>
using namespace std;

string DaoChuoi(string);
string Process(string);

int main()
{
	string s;
	cin >> s;
	cout << Process(s);
	return 0;
}

string DaoChuoi(string s)
{
	int n = s.size();
	while (s[n - 1] == '0')
		n--;
	string ans = "";
	for (int i = n - 1; i >= 0; i--)
		ans += s[i];
	return ans;
}

string Process(string s)
{
	stringstream stream;
	stream << DaoChuoi(s);
	return stream.str();
}
