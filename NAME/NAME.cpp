#include <iostream>
#include <sstream>
using namespace std;

string ChuanHoa(string);
string Process(int);

int main()
{
	int n;
	cin >> n;
	cin.ignore();
	cout << Process(n);
	return 0;
}

string ChuanHoa(string s)
{
	stringstream stream;
	stringstream ss(s);
	string temp;
	string ans = "";
	while (ss >> temp)
	{
		temp[0] = toupper(temp[0]);
		int size = temp.size();
		for (int i = 1; i < size; i++)
			temp[i] = tolower(temp[i]);
		ans += temp + " ";
	}
	ans.pop_back();
	stream << ans;
	return stream.str();
}

string Process(int n)
{
	stringstream stream;
	string x;
	for (int i = 0; i < n; i++)
	{
		getline(cin, x);
		stream << ChuanHoa(x) << endl;
	}
	return stream.str();
}