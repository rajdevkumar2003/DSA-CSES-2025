#include <iostream>
#include <vector>
#include <unordered_map>
#include <cmath>
#include <algorithm>
using namespace std;

long long solve(long long index, long long currentSum, long long totalSum, long long n, vector<long long>& arr, vector<unordered_map<long long, long long>>& dp) {
    if (index >= n) 
        return abs((totalSum - currentSum) - currentSum);

    if (dp[index].count(currentSum)) 
        return dp[index][currentSum];

    long long include = solve(index + 1, currentSum + arr[index], totalSum, n, arr, dp);
    long long exclude = solve(index + 1, currentSum, totalSum, n, arr, dp);

    return dp[index][currentSum] = min(include, exclude);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;
    vector<long long> arr(n);

    for (long long i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long totalSum = 0;
    for (auto weight : arr) {
        totalSum += weight;
    }

    vector<unordered_map<long long, long long>> dp(n);
    long long result = solve(0, 0, totalSum, n, arr, dp);

    cout << result << endl;
    return 0;
}

