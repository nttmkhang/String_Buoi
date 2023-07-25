#include<iostream>
#include<string>
#include<sstream>
#include<set>
using namespace std;

string process(string);
int DemTu(string);

int main()
{
	string s;
	cin >> s;

	cout << process(s);
	return 0;
}

int DemTu(string s)
{
	set<string> words;
	string word="";
	int n = s.size();
	for (int i = 0; i < n; i++)
	{
		if (s[i] == '.')
		{
			if (word != "")
			{
				words.insert(word);
				word = "";
			}
		}
		else
			word += s[i];
	}
	if (word != "")
		words.insert(word);
	return words.size();
}
string process(string s)
{
	stringstream stream;
	stream << DemTu(s);
	return stream.str();
}