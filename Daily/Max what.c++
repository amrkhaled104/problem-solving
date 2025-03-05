#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define int long long
#define endl "\n"
using namespace std;
/* 2D prefix
   for (ll i = 1; i <= w; ++i) {
        for (ll j = 1; j <= h; ++j) {
            grid[i][j] += grid[i - 1][j] + grid[i][j - 1] - grid[i - 1][j - 1];
        }
    }
 */
//vector<vector<int>> arr(n,vector<int>(m));

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(0);
}

void fileIO() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("errors.txt", "w", stderr);
#endif
}

void amooor() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    int maxIt = *max_element(a.begin() + 1, a.end());

    for (int i = 1; i <= m; i++) {
        char c;
        cin >> c;
        int l, r;
        cin >> l >> r;

        if (maxIt >= l && maxIt <= r) {
            switch(c){
                case '+':
                    cout << maxIt + 1 << " ";
                    maxIt += 1;
                    break;
                case '-':
                    cout << maxIt - 1 << " ";
                    maxIt -= 1;
                    break;
            }
            continue;
        }
        cout<<maxIt<<" ";
    }
    cout<<endl;
}


signed main() {
    fastIO();
    fileIO();
    int t;
    cin >> t;
    while (t--) {
        amooor();
    }
    return 0;
}