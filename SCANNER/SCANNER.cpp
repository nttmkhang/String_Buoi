#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

void Nhap(int&, int&, vector<string>&);
vector<string> PhongDai(int, int, int, int, vector<string>);
string Process(int, int, int, int, vector<string>);

int main()
{
	int r, c, zr, zc;
    cin >> r >> c >> zr >> zc;
    vector<string> before(r);
    Nhap(r, c, before);
    
    cout << Process(r, c, zr, zc, before);
	return 0;
}

void Nhap(int& r, int& c, vector<string>& text)
{
    for (int i = 0; i < r; i++)
        cin >> text[i];
}

vector<string> PhongDai(int r, int c, int zr, int zc, vector<string> text)
{
    vector<string> after(r * zr, string(c * zc, ' '));

    for (int i = 0; i < r; i++) 
    {
        for (int j = 0; j < c; j++) 
        {
            char character = text[i][j];
            for (int k = 0; k < zr; k++) 
                for (int l = 0; l < zc; l++) 
                    after[i * zr + k][j * zc + l] = character;
        }
    }
    return after;
}

string Process(int r, int c, int zr, int zc, vector<string> text)
{
    stringstream stream;
    vector<string> after = PhongDai(r, c, zr, zc, text);
    for (auto line : after)
        stream << line << endl;
    return stream.str();
}