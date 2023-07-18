#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

string InHoa(char, char);

int main()
{
	char a, b;
	cin >> a >> b;

	cout << InHoa(a, b);
	return 0;
}

string InHoa(char a, char b)
{
	stringstream stream;
	for (int i = (int)a; i <= (int)b; i++)
		stream << setw(6) << (char)toupper(i);
	return stream.str();
}