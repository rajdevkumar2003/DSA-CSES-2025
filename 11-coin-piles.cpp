#include <bits/stdc++.h>

using namespace std;
void solve() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        
        if ((a + b) % 3 == 0 && a <= 2 * b && b <= 2 * a) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    solve();
    return 0;
}