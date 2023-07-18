#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;

void Fibo(vector<string>&, int);
string process(vector<string>&, int, long long);

int main()
{
	int k;
	cin >> k;
	vector<string> v(93, "");
	vector<long long> lenght;
	while (k--)
	{
		int n;
		long long i;
		cin >> n >> i;
		cout << process(v, n, i);
		cout << endl;
	}
	return 0;
}

void Fibo(vector<string>& v, int n)
{
	v.push_back("A");
	v.push_back("B");
}

string process(vector<string>& v, int n, long long i)
{
	stringstream stream;
	stream << v[n - 1][i - 1];
	return stream.str();
}