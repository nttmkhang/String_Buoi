#include<iostream>
#include<string>
#include<sstream>
using namespace std;

bool HopLe(string, string, int); // kiem tra do dai
string process(string, string, int);

int main()
{
	string a, b;
	int k;
	cin >> a >> b >> k;
	cout << process(a, b, k);
	return 0;
}

bool HopLe(string a, string b, int k)
{
	int sizea = a.size() * k, sizeb = b.size();
	return sizea == sizeb;
}

string process(string a, string b, int k)
{
	stringstream stream;
	if (!HopLe(a, b, k))
	{
		stream << "NO";
		return stream.str();
	}
	int sizea = a.size(), sizeb = b.size(), i = 0;
	for (i; i < sizeb; i += sizea)
		for(int j = 0; j < sizea; j++)
			if (b[i + j] != a[j])
			{
				stream << "NO";
				return stream.str();
			}
	stream << "YES";
	return stream.str();
}