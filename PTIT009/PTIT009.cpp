#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <math.h>
#include <deque>
using namespace std;

int Process(string str1, string str2);

int main() {
	int n; cin >> n;
	string str1, str2;
	cin >> str1 >> str2;
	cout << Process(str1, str2);
	return 0;
}

int Process(string str1, string str2) {
	int n = str1.size();
	deque<int> deq1, deq2;
	for (int i = 0; i < n; ++i) {
		deq1.push_back(str1[i]);
		deq2.push_back(str2[i]);
	}
	int dem = 0;
	while (deq1 != deq2 && dem != n ) {
		char ch = deq1.front();
		deq1.push_back(ch);
		deq1.pop_front();
		++dem;
	}
	if (dem == n)
		return -1;
	return dem;
}
