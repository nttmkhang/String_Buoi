#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;
typedef string BigNum;

void Nhap(vector<BigNum>& vec, int n);
string Process(const vector<BigNum>& vec);

int main() {
	int n = 0;
	cin >> n;
	vector<BigNum> vec;
	Nhap(vec, n);
	cout << Process(vec);
	return 0;
}

string Process(const vector<BigNum>& vec) {
	ostringstream output;
	int demAm = 0;
	int demDuong = 0;
	for (BigNum val : vec) {
		if (val[0] == '-') {
			++demAm;
		}
		else if (val[0] != '0') {
			++demDuong;
		}
	}
	output << demAm << " " << demDuong;
	return output.str();
}

void Nhap(vector<BigNum>& vec, int n) {
	for (int i = 0; i < n; ++i) {
		BigNum val;
		cin >> val;
		vec.push_back(val);
	}
}