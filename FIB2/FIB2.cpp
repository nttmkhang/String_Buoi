#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;

int TanSuat(string, int, char);
long long Process(vector<string>&, int, int);

int main()
{
	int t;
	cin >> t;
	vector<string> v(46, " ");

	for (int i = 0; i < t; i++)
	{
		int n, k;
		cin >> n >> k;
		cout << Process(v, n, k) << endl;
	}
	return 0;
}

int TanSuat(string a, int k, char c)
{
	int dem = 0;
	for (int i = 0; i < k; i++)
		if (a[i] == c)
			dem++;
	return dem;
}

long long Process(vector<string>& v, int n, int k)
{
	if (v[n] != " ")
		return TanSuat(v[n], k, 'a');
	v[0] = 'a';
	v[1] = 'b';
	for (int i = 2; i <= n; i++)
		v[i] = v[i - 1] + v[i - 2];
	return TanSuat(v[n], k, 'a');
}