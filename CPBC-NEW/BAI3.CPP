#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

const long long MOD = 1e9 + 7;

long long legendre(long long n, long long p) {
    long long res = 0, pk = p;
    while (pk <= n) {
        res += n / pk;
        pk *= p;       
    }
    return res;
}

int main() {
    fast();
    
    int T;
    cin >> T;

    while (T--) {
        long long a, b;
        cin >> a >> b;

        long long v2 = legendre(b, 2) - legendre(a-1, 2);
        long long v5 = legendre(b, 5) - legendre(a-1, 5);

        cout << min(v2, v5) % MOD << "\n";
    }
    
    return 0;
}