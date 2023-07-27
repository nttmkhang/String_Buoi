#include <iostream>
#include <sstream>
using namespace std;

int DoDai(string);
int KyTu(string);
string Process(int&);

int main()
{
	int n;
	cout << Process(n);
	return 0;
}

int DoDai(string s)
{
	int n = s.size();
	return min(5, max(n - 5, 0));
}

int KyTu(string s)
{
	int flag1 = 0, flag2 = 0, flag3 = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			flag1 = 1;
		if (s[i] >= 'a' && s[i] <= 'z')
			flag2 = 1;
		if (s[i] >= '0' && s[i] <= '9')
			flag3 = 1;
	}
	int flag = flag1 + flag2 + flag3;
	if (flag == 1)
		return 1;
	if (flag == 2)
		return 2;
	return 5;
}

string Process(int &n)
{
	stringstream stream;
	cin >> n;
	string str;
	for (int i = 0; i < n; i++)
	{
		cin >> str;
		int kq = DoDai(str) + KyTu(str);
		stream << kq << " ";
	}
	return stream.str();
}