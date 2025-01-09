#include <bits/stdc++.h>

using namespace std;

void func(int ind, int n, string s, vector < string > & op) {
    if (ind >= n) {
        op.push_back(s);
        return;
    }

    for (int i = ind; i < n; i++) {
        if (i != ind && s[i] == s[ind]) continue;
        swap(s[ind], s[i]);
        func(ind + 1, n, s, op);
        swap(s[ind], s[i]);
    }
    return;
}

void solve() {
    string s;
    cin >> s;

    vector < string > op;
    int n = s.size();
    sort(s.begin(), s.end());

    func(0, n, s, op);
    sort(op.begin(), op.end());
    cout << op.size() << endl;

    for (auto it: op) {
        cout << it << endl;
    }

    return;
}
int main() {

    solve();
    return 0;

}