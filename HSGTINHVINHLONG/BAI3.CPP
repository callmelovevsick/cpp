#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();
    
    int N; cin >> N;

    vector<ll> cnt(1 << 10, 0);
    for (int i = 0; i < N; i++) {
        long long x;
        cin >> x;
        int mask = 0;
        if (x == 0) {
            mask |= (1 << 0);
        }
        while (x > 0) {
            int d = x % 10;
            mask |= (1 << d);
            x /= 10;
        }
        cnt[mask]++;
    }
    long long ans = 0;
    for (int i = 0; i < (1 << 10); i++) {
        for (int j = i; j < (1 << 10); j++) {
            if (i & j) {
                if (i == j) {
                    ans += cnt[i] * (cnt[i] - 1) / 2;
                } else {
                    ans += cnt[i] * cnt[j];
                }
            }
        }
    }
    cout << ans;
    
    return 0;
}