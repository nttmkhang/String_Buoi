#include<iostream>
#include<string>
#include<map>
#include<set>
#include<sstream>

using namespace std;

void TanSuat(string);

int main()
{
	string s;
	getline(cin, s);
	TanSuat(s);
	return 0;
}

void TanSuat(string s)
{
	set<char> seChu;
	set<char> seSo;
	map<char, int> TanSuat;
	int n = s.size();
	for (int i = 0; i < n; i++)
	{
		if (isdigit(s[i]))
		{
			TanSuat[s[i]]++;
			seSo.insert(s[i]);
		}
		if (isalpha(s[i]))
		{
			char temp = tolower(s[i]);
			TanSuat[temp]++;
			seChu.insert(temp);
		}
	}
	for (char x : seSo)
		cout << x << " " << TanSuat[x] << endl;
	for (char x : seChu)
		cout << x << " " << TanSuat[x] << endl;
}