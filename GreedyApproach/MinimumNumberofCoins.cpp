#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define ll  long long
#define vi  vector<int>
#define vl  vector<ll>
#define vb  vector<bool>
#define vs  vector<string>
#define all(a) a.begin(), a.end()

void solve() {
    int amount;
    cin >> amount;

    vi coins = {1, 2, 5, 10, 20, 50, 100};
    sort(all(coins));  // sort just in case

    int count = 0;
    for (int i = coins.size() - 1; i >= 0; i--) {
        while (amount >= coins[i]) {
            amount -= coins[i];
            count++;
        }
    }

    cout << "Minimum coins needed: " << count << '\n';
}

signed main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t = 1;
    cin >> t;
    while (t-- > 0) {
        solve();
    }

    return 0;
}