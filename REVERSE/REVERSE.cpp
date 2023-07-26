#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <math.h>
#include <unordered_map>
#include <algorithm>
using namespace std;

void DaoNguoc(string& str, int startIndex);
void Nhap(vector<int>& vec, int n);
string Process(string& str, vector<int>& vec);

int main() {
	string str;
	cin >> str;
	int n = 0;
	cin >> n;
	vector<int> vec;
	Nhap(vec, n);
	cout << Process(str, vec);
	return 0;
}

string Process(string& str, vector<int>& vec) {
	for (int startIndex : vec) {
		DaoNguoc(str, startIndex);
	}
	return str;
}

void DaoNguoc(string& str, int startIndex) {
	reverse(str.begin() + startIndex - 1, str.end() - startIndex + 1);
}

void Nhap(vector<int>& vec, int n) {
	int val = 0;
	cin >> val;
	vec.push_back(val);
	int dem = 1;
	for (int i = 1; i < n; ++i) {
		cin >> val;
		if (val == vec.back()) {
			++dem;
			continue;
		}
		if (val != vec.back()) {
			if (dem % 2 == 0) {
				vec.pop_back();
				dem = 1;
			}
			vec.push_back(val);
		}
	}
	if (dem % 2 == 0) {
		vec.pop_back();
	}
}