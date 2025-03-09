#include <bits/stdc++.h>
#include <string>
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
  int x;cin>>x;
  vector<int>vecc_diff(x);
  map<int ,int>mp;
    for (int i = 0; i <x; ++i) {
        int xx;cin>>xx;
        vecc_diff[i]=(xx-i);
        mp[vecc_diff[i]]++;
    }
    int sum=0;
    for (const auto& pair : mp) {
        if (pair.second >= 2) {
            sum += (pair.second * (pair.second - 1)) / 2;
        }
    }
    cout<<sum<<endl;
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