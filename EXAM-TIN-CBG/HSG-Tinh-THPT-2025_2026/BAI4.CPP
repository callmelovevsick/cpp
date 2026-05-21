#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();
    
    int n, k; cin >> n >> k;
    const long long INF = 1e15;
    vector<int> a(k);
    for (int i = 0; i < k; i++) {
        cin >> a[i];
    }
    vector<int> dp(n + 1, INF);
    dp[0] = 0;
    for (int j = 0; j < k; j++) {
        for (int i = a[j]; i <= n; i++) {
            if (dp[i - a[j]] != INF) {
                dp[i] = min(dp[i], dp[i - a[j]] + 1);
            }
        }
    }
    if (dp[n] == INF) {
        cout << -1; 
    } else {
        cout << dp[n]; 
    }

    return 0;
}