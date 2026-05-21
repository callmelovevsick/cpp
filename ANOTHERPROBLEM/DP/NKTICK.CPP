#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();
    
    int n; cin >> n;
    vector<int> t(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> t[i];
    }
    vector<int> r(n);
    for (int i = 1; i <= n - 1; ++i) {
        cin >> r[i];
    }
    vector<long long> dp(n + 1, 0);
    dp[1] = t[1];
    for (int i = 2; i <= n; ++i) {
        dp[i] = min(dp[i-1] + t[i], dp[i-2] + r[i-1]);
    }
    cout << dp[n];
    
    return 0;
}