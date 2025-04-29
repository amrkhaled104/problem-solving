// Problem: Subset Sum Partition (Minimum Difference)
// Source: Inspired by classic DP problem (e.g., CSES: Apple Division)
// Solution by: Amr Khaled
// Date: 2025-04-28
// Tags: Recursion, Subset Sum, Brute Force (Optimizable by DP)

#include <bits/stdc++.h>
using namespace std;

vector<int> a;
int n;
int best_min = INT_MAX;

void minimum(int i, int sum1, int total) {
    if (i == n) {
        int sum2 = total - sum1;
        best_min = min(best_min, abs(sum2 - sum1));
        return;
    }
    minimum(i + 1, sum1 + a[i], total);
    minimum(i + 1, sum1, total);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int total = 0;
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total += a[i];
    }

    minimum(0, 0, total);
    cout << best_min << endl;
    return 0;
}
