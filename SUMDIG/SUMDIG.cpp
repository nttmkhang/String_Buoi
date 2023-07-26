#include<iostream>
#include<sstream>
using namespace std;

int TinhTong(long long);
string Process();

int main()
{
	cout << Process();
	return 0;
}

int TinhTong(long long n)
{
	int s = 0;
	while (n)
	{
		s += n % 10;
		n /= 10;
	}
	return s;
}

string Process()
{
	stringstream stream;
	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		long long n;
		cin >> n;
		stream << TinhTong(n) << endl;
	}
	return stream.str();
}