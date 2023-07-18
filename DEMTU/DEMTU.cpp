#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

int demTu(const string& str);

int main() {
	string str;
	getline(cin, str);
	cout << demTu(str);
	return 0;
}

int demTu(const string& str) {
	istringstream input(str);
	string word;
	int dem = 0;
	while (input >> word) {
		dem++;
	}
	return dem;
}