#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string ChuanHoa(string&);

int main()
{
    int T;
    cin >> T;
    cin.ignore();
    for (int i = 0; i < T; i++)
    {
        string str;
        getline(cin, str);
        cout << ChuanHoa(str) << endl;
    }
	return 0;
}


string ChuanHoa(string& s)
{
    string temp;    
    stringstream stream(s);
    string word;
    stream >> word;
    temp += word;
    while (stream >> word)
    {
        temp += " ";
        temp += word;
    }
    return temp;
}


string ChuanHoa2(string& a)
{
    stringstream stream;
    bool isSpace = false;
    if (a[0] == ' ')
        a.erase(0, 1);
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == ' ')
        {
            if (!isSpace)
            {
                stream << a[i];
                isSpace = true;
            }
        }
        else
        {
            stream << a[i];
            isSpace = false;
        }
    }
    return stream.str();
}
