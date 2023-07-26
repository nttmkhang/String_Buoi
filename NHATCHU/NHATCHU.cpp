#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;

string Process(string);

int main()
{
	string s;
	cin >> s;
	cout << Process(s);
	return 0;
}

string Process(string s)
{
	stringstream stream;
	vector<int> KiTu(256, 0);
	for (int i = 0; i < s.size(); i++)
		if (KiTu[s[i]] == 0)
		{
			KiTu[s[i]]++;
			stream << s[i];
		}
	return stream.str();
}