#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n, q; cin >> n >> q;
    vector<long long> a(n);
    vector<long long> sum(n + 1, 0);
    vector<long long> b(q);
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (long long i = 1; i <= n; i++) {
        sum[i] = sum[i - 1] + a[i - 1];
    }
    while (q--) {
        long long l, r; cin >> l >> r;
        cout << sum[r] - sum[l-1] << endl;
    }

    return 0;
}