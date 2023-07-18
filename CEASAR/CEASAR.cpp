#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <math.h>
#include <map>
using namespace std;

string GiaiMa(string str, int k);

int main() {
	string str;
	cin >> str;
	int k = 0;
	cin >> k;
	cout << GiaiMa(str, k);
	return 0;
}

string GiaiMa(string str, int k) {
	string alphabet = "abcdefghijklmnopqrstuvwxyz";
	map<char, char> map;
	int stt = 0;
	for (char ch : alphabet) {
		map[ch] = stt++;
	}
	for (char& ch : str) {
		ch = alphabet[(map[ch] - k + 26) % 26];
	}
	return str;
}

