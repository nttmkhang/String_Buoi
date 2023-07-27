#include <iostream>
#include <string>
#include <vector>
using namespace std;

string MaHoa(string);

int main()
{
	string s;
	cin >> s;

	cout << MaHoa(s);
    return 0;
}

string MaHoa(string s)
{
	vector<bool> Primes(1001, true);
	Primes[0] = false;
	Primes[1] = false;
	for (int i = 2; i <= 1000; i++)
		if (Primes[i])
			for (int p = i * i; p <= 1000; p += i)
				Primes[p] = false;
	for (unsigned int i = 0; i < s.length(); i++)
		if (Primes[i])
			s[i] = '*';
	return s;
}