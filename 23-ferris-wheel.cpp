#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, x;
    cin >> n >> x;
    vector < long long > arr(n);
    for (long long i = 0; i < n; i++) cin >> arr[i];

    sort(arr.begin(), arr.end());

    long long i = 0, j = n - 1;
    long long cnt = 0;

    while (i <= j) {
        if (arr[i] + arr[j] <= x) {
            i++;
        }
        j--;
        cnt++;
    }

    cout << cnt << endl;
    return 0;

}
