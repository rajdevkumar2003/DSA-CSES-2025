#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    vector < long long > op(26, 0);
    for (auto it: s) {
        op[it - 'A']++;
    }
    long long even = 0;
    long long odd = 0;

    for (int i = 0; i < 26; i++) {
        if (op[i] % 2) odd++;
        else even++;
    }
    if (odd > 1) cout << "NO SOLUTION" << endl;
    else {
        string temp = "";
        string odi = "";
        for (int i = 0; i < 26; i++) {
            if (op[i] % 2 == 0) {
                int m = op[i] / 2;
                while (m--) {
                    temp += i + 'A';
                }
            }
            else {
                int m = op[i];
                while (m--) {
                    odi += i + 'A';
                }
            }
        }
        string rev = temp;
        reverse(rev.begin(), rev.end());

        temp += odi;
        temp += rev;

        cout << temp << endl;
    }

    return 0;

}