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
    vector<int>a(n);
    for(int&i:a)cin>>i;
    int t;
    cin>>t;
    vector<int>dp(t+1);
    dp[0]=1;
    for(int j=0;j<n;j++){
        for(int i=1;i<=t;i++){
            if(i-a[j]>=0){
                dp[i]+=dp[i-a[j]];
            }
        }
        // cout<<dp[j+1];
    }
    cout<<dp[t];

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