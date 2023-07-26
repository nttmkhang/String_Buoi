#include <iostream>
#include <sstream>
using namespace std;

string ChuanHoaTu(string);
string ChuanHoa(string);
string Process();

int main()
{
	cout << Process();
	return 0;
}

string ChuanHoa(string s)
{
	string temp = "";
	stringstream ss(s);
	string word;
	while (ss >> word)
	{
		word = ChuanHoaTu(word);
		temp += word + " ";
	}
	temp.pop_back();
	return temp;
}

string ChuanHoaTu(string word)
{
	word[0] = toupper(word[0]);
	unsigned int size = word.size();
	for (unsigned int i = 1; i < size; i++)
		word[i] = tolower(word[i]);
	return word;
}

string Process()
{
	stringstream stream;
	int n;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++)
	{
		string x;
		getline(cin, x);
		stream << ChuanHoa(x) << endl;
	}
	return stream.str();
}