#include<iostream>
#include<string>
#include<map>
#include<sstream>
#include<iomanip>
using namespace std;

void Init(map<int, int>&);
string Process(map<int, int>, string);

int main()
{
	map<int, int> v_index;
	Init(v_index);
	int n;
	cin >> n;
	cin.ignore();
	while (n--)
	{
		string s; 
		getline(cin, s);
		cout << Process(v_index, s) << endl;
	}
	return 0;
}

void Init(map<int, int>& v_index)
{
	int i = 1;
	for (int j = 'A'; j <= 'Z'; j++)
	{
		v_index[j] = i;
		i++;
	}
	v_index[' '] = i;
	i++;
	v_index[39] = i; // 39 la '
}

string Process(map<int, int> v_index, string s)
{
	stringstream stream;
	double ChuVi = 60 * 3.14, KC = ChuVi / 28;
	double thoigian = 1;
	int start = v_index[s[0]];
	int n = s.size();
	for (int i = 1; i < n; i++)
	{
		if (isalpha(s[i]))
			s[i] = toupper(s[i]);
		int index_i = v_index[s[i]];
		int kc1 = abs(start - index_i), kc2 = 28 - start + index_i;
		int kc = min(kc1, kc2);
		thoigian = thoigian + 1 + kc * KC / 15;
		start = index_i;
	}
	stream << fixed << setprecision(4) << thoigian;
	return stream.str();
}