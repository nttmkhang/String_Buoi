#include<iostream>
#include<string>
#include<sstream>
using namespace std;

bool LuyenCode(string, int);
string process(string);

int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	cout << process(s);
	return 0;
}

bool LuyenCode(string s, int i)
{
	string temp = "luyencode";
	int n = temp.size();
	for (int j = 0; j < n; j++)
		if (s[i + j] != temp[j])
			return false;
	return true;
}

string process(string s)
{
	stringstream stream;
	int count = 0, n = s.size();
	for (int i = 0; i < n; i++)
		if (s[i] == 'l')
			if (LuyenCode(s, i))
				count++;
	stream << count;
	return stream.str();
}