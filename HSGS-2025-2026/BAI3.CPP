#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

const int MOD = 998244853;

int main() {
    fast();

    long long N, a, b, c;
    if (!(cin >> N >> a >> b >> c)) return 0;
    vector<long long> dp(N + 1, 0);
    dp[0] = 1;
    for (int i = 1; i <= N; ++i) {
        if (i >= 1) {
            dp[i] = (dp[i] + (a * dp[i - 1]) % MOD) % MOD;
        }
        if (i >= 2) {
            dp[i] = (dp[i] + (b * dp[i - 2]) % MOD) % MOD;
        }
        if (i >= 3) {
            dp[i] = (dp[i] + (c * dp[i - 3]) % MOD) % MOD;
        }
    }
    cout << dp[N] << "\n";
    
    return 0;
}