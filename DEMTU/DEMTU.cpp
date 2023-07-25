#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

int DemTu(const string& str);

int main() 
{
	string str;
	getline(cin, str);

	cout << DemTu(str);
	return 0;
}

int DemTu(const string& str) 
{
	stringstream input(str);
	string word;
	int dem = 0;
	while (input >> word)
		dem++;
	return dem;
}