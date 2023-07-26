#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

string InHoa1(char, char);
string InHoa2(char, char);

int main()
{
	char a, b;
	cin >> a >> b;

	cout << InHoa2(a, b);
	return 0;
}

string InHoa1(char a, char b)
{
	stringstream stream;
	for (int i = (int)a; i <= (int)b; i++)
		stream << setw(6) << (char)(i - 32);
	return stream.str();
}

string InHoa2(char a, char b)
{
	a = toupper(a);
	b = toupper(b);
	stringstream stream;
	for (char c = a; c <= b; c++)
		stream << setw(6) << c;
	return stream.str();
}