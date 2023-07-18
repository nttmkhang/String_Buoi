#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

bool ktHello(string str);


int main() {
	string str;
	cin >> str;
	if (ktHello(str)) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}

bool ktHello(string str) {
	int n = str.size();
	int i = 0;
	int dem = 0;
	while (i < n) {
		++i;
		if (str[i] == 'h') {
			++dem;
			break;
		}
	}
	while (i < n) {
		++i;
		if (str[i] == 'e') {
			++dem;
			break;
		}
	}
	while (i < n) {
		++i;
		if (str[i] == 'l') {
			++dem;
			break;
		}
	}
	while (i < n) {
		++i;
		if (str[i] == 'l') {
			++dem;
			break;
		}
	}
	while (i < n) {
		++i;
		if (str[i] == 'o') {
			++dem;
			break;
		}
	}
	if (dem == 5) 
		return true;
	return false;
}
