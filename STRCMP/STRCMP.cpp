#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

string makeString(int chuSo, int tanSuat);
string Process(int num1, int num2);

int main() {
	int num1 = 0;
	int num2 = 0;
	cin >> num1 >> num2;
	cout << Process(num1, num2);
	return 0;
}

string makeString(int chuSo, int tanSuat) {
	ostringstream ret;
	for (int i = 0; i < tanSuat; ++i) {
		ret << chuSo;
	}
	return ret.str();
}

string Process(int num1, int num2) {
	ostringstream output;
	string s1 = makeString(num1, num2);
	string s2 = makeString(num2, num1);
	if (s1 < s2) {
		output << s1;
	}
	else {
		output << s2;
	}
	return output.str();
}

