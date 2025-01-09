#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    long long cnt = 0;
    for (long long i = 5; n / i >= 1; i *= 5) {
        cnt += n / i;
    }
    cout << cnt;
    return 0;
}