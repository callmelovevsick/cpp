#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();
    
    int n, k; cin >> n >> k;
    int target = n * (k - 1);
    int maxq = (int)sqrt((double)(n - 1));
    while ((maxq + 1) * (maxq + 1) <= n - 1) maxq++;
    vector<vector<ll>> dp(k + 1, vector<ll>(target + 1, 0));
    dp[0][0] = 1;
    for (int q = 1; q <= maxq; q++) {
        int q2 = q * q;
        if (q2 > target) break;
        for (int i = k; i >= 1; i--)
            for (int s = target; s >= q2; s--)
                dp[i][s] += dp[i - 1][s - q2];
    }
    cout << dp[k][target];
    
    return 0;
}