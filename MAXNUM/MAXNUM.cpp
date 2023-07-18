#include<iostream>
#include<string>
#include<sstream>
using namespace std;

string DieuChinh(string);
string SoSanh(string, string);
string process(string);

int main()
{
	string s;
	cin >> s;
	cout << process(s);
	return 0;
}

string DieuChinh(string a)
{
	int i = 0;
	int n = a.size();
	while (i < n && a[i] == '0')
		i++;
	if (i == n)
		return "0";
	string temp = "";
	for (i; i < n; i++)
		temp += a[i];
	return temp;
}

string SoSanh(string a, string b)
{
	string anew = DieuChinh(a), bnew = DieuChinh(b);
	int sizea = anew.size(), sizeb = bnew.size();
	if (sizea != sizeb)
	{
		if (sizea > sizeb)
			return anew;
		if (sizea < sizeb)
			return bnew;
	}
	string lc = anew;
	for (int i = 0; i < sizea; i--)
		if (anew[i] != bnew[i])
		{
			if (anew[i] > bnew[i])
				lc = anew;
			else if (anew[i] < bnew[i])
				lc = bnew;
			break;
		}
	return lc;
}
string process(string s)
{
	stringstream stream;
	string max_val = "";
	int n = s.size();
	for (int i = 0; i < n; i++)
	{
		if (isdigit(s[i]))
		{
			string temp = "";
			while (isdigit(s[i]))
				temp += s[i++];
			i--;
			if (max_val.size() == 0)
				max_val = DieuChinh(temp);
			else
				max_val = SoSanh(max_val, temp);
		}
	}
	stream << max_val;
	return stream.str();
}