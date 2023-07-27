#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string Process(const string&);

int main()
{
	string a;
	getline(cin, a);

	cout << Process(a);
	return 0;
}

string Process(const string& s)
{
	stringstream stream;
	for (unsigned int i = 0; i < s.size(); i++)
	{
		char x = s[i];
		if (x >= 65 && x <= 90)
			x += 32;
		stream << x;
	}
	return stream.str();
}