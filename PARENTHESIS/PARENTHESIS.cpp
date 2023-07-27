#include <iostream>
#include <stack>
#include <string>
#include <sstream>
using namespace std;

string Process(string);

int main() 
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) 
    {
        string s;
        cin >> s;
        cout << Process(s) << endl;
    }

    return 0;
}

string Process(string s)
{
    stringstream stream;

    stack<char> st;
    for (char c : s)
    {
        if ((c == '('))
            st.push(c);

        else
        {
            if (c == '*')
            {
                if ((!st.empty() && st.top() == '*') || (!st.empty() && st.top() == '('))
                    st.pop();
                else
                    st.push(c);
            }
            else
            {
                if ((!st.empty() && st.top() == '(') || (!st.empty() && st.top() == '*'))
                    st.pop();
                else
                    st.push(')');

            }
        }
    }

    if (st.empty())
        stream << "YES";
    else
        stream << "NO";
    return stream.str();
}