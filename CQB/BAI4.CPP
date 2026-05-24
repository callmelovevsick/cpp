#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();
    
    long long k; cin >> k;
    long long ans = 1e18;
    for (long long i = 1; i * i <= k; i++) {
        if (k % i == 0) {
            long long j = k / i;
            ans = min(ans, i + j - 1);
        }
    }
    cout << ans;
    
    return 0;
}