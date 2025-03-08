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
    string str;cin>>str;
    deque<char>de;
    for(int i=0;i<str.size();i++){
        de.push_back(str[i]);
    };
    while(de.size()){
        if((de.front()=='0'&&de.back()=='1')||de.front()=='1'&&de.back()=='0'){
            de.pop_front();
            de.pop_back();
        }
        else{
            break;
        }
    }
    cout<<de.size()<<endl;
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