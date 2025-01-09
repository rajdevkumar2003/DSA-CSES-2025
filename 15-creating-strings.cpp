#include <bits/stdc++.h>
using namespace std;

void func(int ind, int n, string& s, vector<string>& op) {
    if (ind == n) {
        op.push_back(s);
        return;
    }

    unordered_set<char> used; // To track already swapped characters at this level
    for (int i = ind; i < n; i++) {
        if (used.find(s[i]) != used.end()) continue; // Skip duplicates
        used.insert(s[i]);

        swap(s[ind], s[i]);
        func(ind + 1, n, s, op);
        swap(s[ind], s[i]); // Backtrack
    }
    return;
}

void solve() {
    string s;
    cin >> s;

    vector<string> op;
    int n = s.size();

    sort(s.begin(), s.end()); // Sorting ensures duplicates are adjacent
    func(0, n, s, op);

    cout << op.size() << endl;
    for (auto& it : op) {
        cout << it << endl;
    }
}

int main() {
    solve();
    return 0;
}
