#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

const int N = 1e6+5;
int sf[N+5];

void sieve(int n) {
    for (int i = 1; i <= n; i++) sf[i] = i;
    for (int p = 2; p * p <= n; p++) {
        int p2 = p*p;
        for (int j = p2; j <= n; j++) {
            while(sf[j] % p2 == 0) sf[j] /= p2;
        }
    }
}

int cnt[N];

int main() {
    fast();

    int n, m; cin >> n >> m;
    int ans = 1;
    sieve(n);
    for (int i = 1; i <= n; i++) cnt[sf[i]]++;
    for (int i = 1; i <= n; i++) {
        if (cnt[i]) ans = 1LL * ans * (cnt[i] + 1) % m;
    }
    cout << ans;

    return 0;
}
