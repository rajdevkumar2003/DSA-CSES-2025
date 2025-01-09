#include <bits/stdc++.h>
using namespace std;


void solveHanoi(int n, int from, int to, int aux) {
    if (n == 0) return;

    solveHanoi(n - 1, from, aux, to);

    cout << from << " " << to << endl;

    solveHanoi(n - 1, aux, to, from);
}

int main() {
    int n;
    cin >> n;

    int moves = (1 << n) - 1;
    cout << moves << endl;
    solveHanoi(n, 1, 3, 2);

    return 0;
}
