#include<iostream>
#include<string>
#include<sstream>
using namespace std;

bool ktDauCuoi(string);
string Process(string);

int main()
{
	string s;
	while(cin >> s)
		cout << Process(s);
	return 0;
}

bool ktDauCuoi(string s)
{
	return s[0] == s[s.size() - 1];
}

string Process(string s)
{
	stringstream stream;
	if (ktDauCuoi(s))
		stream << "YES";
	else
		stream << "NO";
	stream << endl;
	return stream.str();
}