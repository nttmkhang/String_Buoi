#include <iostream>
#include <sstream>
using namespace std;

int TinhDiem(string);
string Process(string);

int main()
{
	string s;
	cin >> s;
	cout << Process(s);
	return 0;
}

int TinhDiem(string s)
{
	int sum = 0;
	int streak = 0;
	for (unsigned int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'C')
		{
			streak += 1;
			sum += streak;
		}
		else
		{
			streak = 0;
		}
	}
	return sum;
}

string Process(string s)
{
	stringstream stream;
	stream << TinhDiem(s);
	return stream.str();
}
