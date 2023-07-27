#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;
typedef string BigNum;

void Nhap(vector<BigNum>& vec);
string Process(const vector<BigNum>& vec);

int main() 
{
	
	vector<BigNum> vec;
	Nhap(vec);

	cout << Process(vec);
	return 0;
}

string Process(const vector<BigNum>& vec)
{
	stringstream stream;

	int demAm = 0;
	int demDuong = 0;
	for (BigNum val : vec) 
		if (val[0] == '-') 
			++demAm;
		else if (val[0] != '0') 
			++demDuong;

	stream << demAm << " " << demDuong;
	return stream.str();
}

void Nhap(vector<BigNum>& v) 
{
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; ++i) 
	{
		BigNum val;
		cin >> val;
		v.push_back(val);
	}
}