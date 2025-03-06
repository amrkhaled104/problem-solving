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
    int n;cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    bool even= false,odd= false;
    for(int i=0;i<n;i++){
       if((vec[i]%2==0))
       {
           even=true;
       }
        if((vec[i]%2!=0))
        {
            odd=true;
        }
    }
    if(odd && even){
        sort(vec.begin(),vec.end());
    }
    for(int i=0;i<n;i++){
        cout<<vec[i]<<" ";
    }

}
signed main() {
    fastIO();
    fileIO();
    int t=1;
    //cin >> t;
    while (t--) {
        amooor();
    }
    return 0;
}