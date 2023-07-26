#include <iostream>
#include <string>
#include <sstream>

using namespace std;

bool ktDoiXung(string);
string Process();

int main()
{
	cout << Process();
	return 0;
}

bool ktDoiXung(string s)
{
	unsigned int n = s.size();
	for (unsigned int i = 0; i < n / 2; i++)
		if (s[i] != s[n - 1 - i])
			return false;
	return true;
}

string Process()
{
	unsigned int T;
	cin >> T;

	stringstream stream;
	for (unsigned int i = 0; i < T; i++)
	{
		cin.ignore();
		string s;
		getline(cin, s);
		long long k;
		cin >> k;

		if (ktDoiXung(s))
			stream << "YES" << endl;
		else
			stream << "NO" << endl;
	}
	return stream.str();
}