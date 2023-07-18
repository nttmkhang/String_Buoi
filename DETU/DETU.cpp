#include<iostream>
#include<string>
#include<sstream>
#include<set>
using namespace std;

string process(string);

int main()
{
	string s;
	cin >> s;
	cout << process(s);
	return 0;
}

string process(string s)
{
	stringstream stream;
	set<string> se;
	string temp;
	int count = 0, n = s.size();
	for (int i = 0; i < n; i++)
	{
		if (s[i] == '.')
		{
			if (temp != "")
			{
				se.insert(temp);
				temp = "";
			}
		}
		else
			temp += s[i];
	}
	if (temp != "")
		se.insert(temp);
	count = se.size();
	stream << count;
	return stream.str();
}