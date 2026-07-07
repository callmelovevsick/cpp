#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

const int MOD = 1e9+7;
const int N = 1e5+5;
const int A = 1e7+5;
int n, a[N];
int spf[A], cnt[A];
void sieve(int n) {
    for (int i = 2; i <= n; i++) {
        if (!spf[i]) {
            spf[i] = i;
            if (1LL * i * i <= n) {
                for (int j = i * i; j <= n; j += i) if (!spf[j]) spf[j] = i;
            }
        }
    }
}

void factor(int x) {
    while (x != 1) {
        int c = 0;
        int p = spf[x];
        while (x > 1 && x % p == 0) {
            c++;
            x /= p;
        }
        cnt[p] = max(cnt[p], c);
    }
}

int pow(int a, int p) {
    int ans = 1;
    for (; p; p >>= 1, a = 1LL * a * a % MOD) {
        if (p & 1) ans = 1LL * ans * a % MOD;
    }
    return ans;
}

int main() {
    fast();
    
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    sieve(10000000);
    for (int i = 0; i < n; i++) factor(a[i]);
    int ans = 1;
    for (int i = 0; i < 10000000; i++) {
        if (cnt[i]) {
            if (cnt[i] & 1) cnt[i]++;
            ans = 1LL * ans * pow(i, cnt[i]) % MOD;
        }
    }
    cout << ans;

    return 0;
}
