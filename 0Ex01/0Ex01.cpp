#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s0("Initial string");
	string s1;
	string s2(s0);
	string s3(s0, 8, 3);
	string s4("A character sequence");
	string s5("Another character sequence", 12);
	string s6a(10, 'x');
	string s6b(10, 42);      // 42 is the ASCII code for '*'
	string s7(s0.begin(), s0.begin() + 7);

	cout << "s0: " << s0 << endl;
	cout << "s1: " << s1 << endl;
	cout << "s2: " << s2 << endl;
	cout << "s3: " << s3 << endl;
	cout << "s4: " << s4 << endl;
	cout << "s5: " << s5 << endl;
	cout << "s6a: " << s6a << endl;
	cout << "s6b: " << s6b << endl;
	cout << "s7: " << s7 << endl;
	return 0;
}