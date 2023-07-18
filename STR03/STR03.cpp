#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <math.h>
#include <unordered_map>
using namespace std;

void Nhap(vector<char>& vec, int n);
unordered_map<char, int> CountAllChar(const string& str);
string Process(const string& str, const vector<char>& vec);

int main() {
	string str;
	getline(cin, str);
	int n = 0;
	cin >> n;
	vector<char> vec;
	Nhap(vec, n);
	cout << Process(str, vec);
	return 0;
}

void Nhap(vector<char>& vec, int n) {
	for (int i = 0; i < n; ++i) {
		char ch;
		cin >> ch;
		vec.push_back(ch);
	}
}

unordered_map<char, int> CountAllChar(const string& str) {
	unordered_map<char, int> map;
	for (char ch : str) {
		if (isupper(ch)) {
			ch = tolower(ch);
		}
		map[ch]++;
	}
	return map;
}

string Process(const string& str, const vector<char>& vec) {
	ostringstream output;
	unordered_map<char, int> map = CountAllChar(str);
	for (char ch : vec) {
		if (isupper(ch)) {
			ch = tolower(ch);
		}
		output << map[ch] << endl;
	}
	return output.str();
}