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
    int n,sume=0,sumo=0;;cin>>n;
    vector<pair<int,int>>vec;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        vec.push_back({x,i+1});
        if(x%2==0){
            sume+=vec[i].second;
        } else{
            sumo+=vec[i].second;
        }
    }
    if(sumo>sume) cout<<sume<<endl;
    else  cout<<sumo<<endl;
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