#include <iostream>
#include <string>
#include <sstream>

using namespace std;
string ChuanHoa(string);

int main()
{
	int T;
	cin >> T;
	cin.ignore();
	string s;
	for (int i = 0; i < T; i++)
	{
		getline(cin, s);
		cout << ChuanHoa(s) << endl;
	}
	return 0;
}

string ChuanHoa(string s)
{
	stringstream stream;
	int n = s.size();

	if (s[0] >= 97 && s[0]<=122)
		s[0] -= 32;
	for (int i = 1; i < n; i++)
	{
		if (s[i] == ' ')
			continue;
		if (s[i] < 'A')
			continue;
		if (s[i] > 'Z' && s[i] < 'a')
			continue;
		if (s[i] > 'z')
			continue;
		if (s[i - 1] == ' ' && s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
		else if (s[i - 1] != ' ' && s[i] >= 65 && s[i] <= 90)
			s[i] += 32;
	}
	stream << s;
	return stream.str();
}