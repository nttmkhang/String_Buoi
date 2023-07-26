#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    long long n = s.size();
    int dem = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (s[i] != s[j]) {
                bool found = true;
                for (int k = i + 1; k <= j - 1; k++) {
                    if (s[k] == s[i] || s[k] == s[j]) {
                        found = false;
                        break;
                    }
                }
                if (found) {
                    dem++;
                }
            }
        }
    }
    cout << dem;
    return 0;
}
