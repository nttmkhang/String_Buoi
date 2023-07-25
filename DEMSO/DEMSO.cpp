#include <iostream>
#include <string>
#include <cctype>
#include <sstream>
using namespace std;

string Process();
int DemNumber(string);

int main()
{
	cout << Process();
	return 0;
}

int DemNumber(string s)
{
	if (s.size() == 1)
	{
		if (isdigit(s[0]))
			return 1;
		return 0;
	}

	int dem = 0;
	unsigned int n = s.size();
	for (unsigned int i = 0; i <= n - 2; i++)
		if (isdigit(s[i]))
			if (isalpha(s[i + 1]))
				dem++;
	if (isdigit(s[n - 1]))
		dem++;
	return dem;
}

string Process()
{
	string s;
	getline(cin, s);

	stringstream stream;
	stream << DemNumber(s);
	return stream.str();
}