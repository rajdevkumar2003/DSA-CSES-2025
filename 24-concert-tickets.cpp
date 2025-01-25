#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    
    multiset<int> tickets;
    for (int i = 0; i < n; i++) {
        int price;
        cin >> price;
        tickets.insert(price);
    }

    for (int i = 0; i < m; i++) {
        int max_price;
        cin >> max_price;

        auto it = tickets.upper_bound(max_price);  // Find first element > max_price
        if (it == tickets.begin()) {  // No valid ticket
            cout << -1 << '\n';
        } else {
            --it;  // Move to the valid ticket (largest ≤ max_price)
            cout << *it << '\n';
            tickets.erase(it);  // Remove the sold ticket
        }
    }

    return 0;
}
