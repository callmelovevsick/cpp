#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();
    in("BAI3");
    out("BAI3");

    int n;
    long long k;
    cin >> n >> k;
    vector<long long> a(n + 1);
    vector<long long> prefix(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    prefix[0] = 0;
    for (int i = 1; i <= n; i++) {
        prefix[i] = prefix[i - 1] + a[i];
    }
    int ans = 0;
    for (int l = 1; l <= n; l++) {
        for (int r = l; r <= n; r++) {
            long long sum = prefix[r] - prefix[l - 1];
            int len = r - l + 1;
            if (sum == 1LL * k * len) {
                ans = max(ans, len);
            }
        }
    }
    cout << ans;
    
    return 0;
}
