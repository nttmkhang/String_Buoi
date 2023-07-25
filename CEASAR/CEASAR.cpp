#include <iostream>
#include <string>
using namespace std;

char DichTrai(char, int);
string GiaiMa(string str, int k);

int main() 
{
	string str;
	cin >> str;
	int k = 0;
	cin >> k;
	cout << GiaiMa(str, k);
	return 0;
}

char DichTrai(char c, int k)
{
	c = (char)(((int(c) - int('a')) - k + 26) % 26 + int('a'));
	return c;
}

string GiaiMa(string s, int k)
{
	for (char& c : s)
		c = DichTrai(c, k);
	return s;
}

//string GiaiMa01(string str, int k) 
//{
//	string alphabet = "abcdefghijklmnopqrstuvwxyz";
//	map<char, char> map;
//	int stt = 0;
//	for (char ch : alphabet) {
//		map[ch] = stt++;
//	}
//	for (char& ch : str) {
//		ch = alphabet[(map[ch] - k + 26) % 26];
//	}
//	return str;
//}
//
//string GiaiMa02(string s, int k)
//{
//	string alphabet = "abcdefghijklmnopqrstuvwxyz";
//	map<char, char> map;
//	for (unsigned int vt = 0; vt < alphabet.size(); vt++)
//		map[alphabet[vt]] = vt;
//	unsigned int n = s.size();
//	for (unsigned int i = 0; i < n; i++)
//		s[i] = alphabet[(map[s[i]] - k + 26) % 26];
//	return s;
//}