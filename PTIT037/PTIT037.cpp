﻿#include <iostream>
#include <string>
#include <unordered_map>
#include <sstream>
using namespace std;

bool KiemTra(const unordered_map<char, int>&, const string&);
string Process(const string&);

int main()
{
    string s;
    cin >> s;

    cout << Process(s);
    return 0;
}

string Process(const string& s)
{
    stringstream stream;
    unordered_map<char, int> TanSuatChuoi;
    for (char c : s)
        TanSuatChuoi[c]++;

    string code[10] = { "ZERO", "ONE", "TWO", "THREE", "FOUR", "FIVE", "SIX", "SEVEN", "EIGHT", "NINE" };

    for (const string& temp : code)
    {
        unordered_map<char, int> TanSuatCode;
        for (char c : temp)
            TanSuatCode[c]++;

        int flag = 1;
        for (const auto& pair : TanSuatCode)
            if (TanSuatChuoi.find(pair.first) == TanSuatChuoi.end() || TanSuatChuoi.at(pair.first) < pair.second)
            {
                flag = 0;
                break;
            }

        if(flag==1)
        {
            stream << temp;
            return stream.str();
        }
    }

    stream << "CHIA BUON, PHAI VE ROI, HEN NAM SAU NHE!!";
    return stream.str();
}