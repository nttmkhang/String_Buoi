#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

int NumChange(string str);

int main() {
	string str;
	int n = 0;
	cin >> n;
	cin >> str;
	cout << NumChange(str);
	return 0;
}

int NumChange(string str) {
	int dem = 0;
	int i = 1;
	for (i = 1; i <= str.size() - 2; ++i) {
		if (str[i] == str[i - 1]) {
			++dem;
			if (str[i] == str[i + 1]) {
				++i;
			}
		}
	}
	if (i != str.size() && str[str.size() - 1] == str[str.size() - 2]) {
		++dem;
	}
	return dem;
}