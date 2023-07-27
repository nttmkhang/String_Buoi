#include <iostream>
#include <string>
#include <vector>
using namespace std;

void GenerateStrings(string s, string current, int index, vector<string>& results) {
    if (index == s.length()) {
        results.push_back(current);
        return;
    }

    for (int i = 0; i < s.length(); i++) {
        current[index] = s[i];
        GenerateStrings(s, current, index + 1, results);
    }
}

int main() {
    string s;
    cin >> s;

    vector<string> results;
    GenerateStrings(s, string(s.length(), ' '), 0, results);

    cout << results.size() << endl;
    for (string result : results) {
        cout << result << endl;
    }

    return 0;
}
