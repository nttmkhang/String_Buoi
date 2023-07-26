#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <math.h>
#include <unordered_map>
using namespace std;

void Nhap(vector<char>& vec, int n);
unordered_map<char, int> CountAllChar(const string& str);
string Process(const string& str, const vector<char>& vec);

int main() 
{
	string str;
	getline(cin, str);
	int T = 0;
	cin >> T;
	vector<char> vec;
	Nhap(vec, T);

	cout << Process(str, vec);
	return 0;
}

void Nhap(vector<char>& vec, int n) 
{
	for (int i = 0; i < n; ++i) 
	{
		char ch;
		cin >> ch;
		vec.push_back(ch);
	}
}

unordered_map<char, int> CountAllChar(const string& s) 
{
	unordered_map<char, int> map;
	for (char c : s) 
	{
		if (isupper(c)) 
			c = tolower(c);
		map[c]++;
	}
	return map;
}

string Process(const string& str, const vector<char>& vec) 
{
	stringstream stream;
	unordered_map<char, int> map = CountAllChar(str);
	for (char ch : vec) 
	{
		if (isupper(ch)) 
			ch = tolower(ch);
		stream << map[ch] << endl;
	}
	return stream.str();
}