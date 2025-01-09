#include <bits/stdc++.h>

using namespace std;

vector<string> generateGrayCode(int n) {
    vector<string> grayCode;
    int total = 1 << n; // 2^n
    for (int i = 0; i < total; ++i) {
        int gray = i ^ (i >> 1);
        grayCode.push_back(bitset<16>(gray).to_string().substr(16 - n)); // Convert to binary with n bits
    }
    return grayCode;
}

int main() {
    int n;
    cin >> n;
    vector<string> grayCode = generateGrayCode(n);
    for (const string &code : grayCode) {
        cout << code << endl;
    }
    return 0;
}