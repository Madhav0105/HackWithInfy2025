#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ll  long long
#define vi    vector<int>
#define vl  vector<ll>
#define vb  vector<bool>
#define vs  vector<string>
#define all(a) a.begin(), a.end()

void solve(){
    int n;
    cin>>n;
    vector<int>dp(n+1);
    dp[0]=1,dp[1]=1,dp[2]=2;
    for(int i=3;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
    }
    cout<<dp[n];
}

signed main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t=1;
    // cin>>t;
    while(t-->0){
        solve();
    }
    return 0;
}