#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <unordered_set>
#include <math.h>
using namespace std;

int Process(string str);

int main() {
	string str;
	cin >> str;
	cout << Process(str);
	return 0;
}
int Process(string str) {
	unordered_set<char> set;
	for (char ch : str) {
		set.insert(ch);
	}
	return set.size();
}
