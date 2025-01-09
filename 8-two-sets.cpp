#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    long long sum = n * (n + 1) / 2;
    if (sum % 2) cout << "NO" << endl;
    else {
        cout << "YES" << endl;


        long long mid = sum / 2;
        vector < long long > v1;
        vector < long long > v2;
        for (long long i = n; i >= 1; i--) {
            if (i <= mid) {
                v1.push_back(i);
                mid -= i;
            }
            else v2.push_back(i);
        }

        long long n1 = v1.size();
        long long n2 = v2.size();

        cout << n2 << endl;
        for (long long i = n2 - 1; i >= 0; i--) {
            cout << v2[i] << " ";
        }
        cout << endl;
        cout << n1 << endl;
        for (long long i = n1 - 1; i >= 0; i--) {
            cout << v1[i] << " ";
        }
    }
    return 0;
}