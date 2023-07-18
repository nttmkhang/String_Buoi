#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int SoGanh(string);
string Process(string);

int main()
{
	string a;
	cin >> a;
	cout << Process(a);
	return 0;
}

int SoGanh(string a)
{
	int n = a.size();
	int dem = 0;
	string temp = "";
		
	if (dem != 0)
		return dem;
	return -1;
}

string Process(string a)
{
	stringstream stream;
	stream << SoGanh(a);
	return stream.str();
}