#include <iostream>
#include <cmath>
#include <sstream>
#include<vector>
using namespace std;

bool ktTonTai(string, char);
string Process(string);

int main()
{
	string s;
	cin >> s;
	cout << Process(s);
	return 0;
}
 
bool ktTonTai(string s, char ch)
{
	for (char x : s)
	{
		if (ch == x)
			return true;
	}
	return false;
}

string Process(string s)
{
	stringstream stream;
	int n = s.size();
	s[0] = tolower(s[0]);
	vector<int> v(n, 0);
	v[0] = 1;
	for (int i = 1; i < n; i++)
	{
		s[i] = tolower(s[i]);
		if (s[i - 1] + 1 == s[i])
			v[i] = v[i - 1] + 1;
		else
			v[i] = 1;
	}
	int count = v[0];
	for (int i = 1; i < n; i++)
		if (v[i] > count)
			count = v[i];
	for (int i = 0; i < n; i++)
		cout << v[i] << " ";
	cout << endl;
	//temp.push_back(s[0]);
	//int count = 1;
	//for (int i = 1; i < s.size(); i++)
	//{
	//	if (ktTonTai(temp, s[i]))
	//	{
	//		int n = temp.size();
	//		count = max(count, n);
	//		temp = "";
	//	}
	//	else
	//	{
	//		temp.push_back(s[i]);
	//		count++;
	//	}
	//}
	stream << count;
	return stream.str();
}