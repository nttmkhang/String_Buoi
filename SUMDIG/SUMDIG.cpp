#include<iostream>
#include<sstream>
using namespace std;

int TinhTong(string);
string Process(int);

int main()
{
	int s; cin >> s;
	cout << Process(s);
	return 0;
}

int TinhTong(string n)
{
	int ans = 0;
	for (int i = 0; i < n.size(); i++)
		ans += (n[i] - 48);
	return ans;
}

string Process(int s)
{
	stringstream stream;
	for (int i = 0; i < s; i++)
	{
		string n;
		cin >> n;
		stream << TinhTong(n) << endl;
	}
	return stream.str();
}