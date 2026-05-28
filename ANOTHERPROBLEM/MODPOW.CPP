#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

inline long long modpow(long long a, long long b, long long mod) {
    long long res = 1;
    a %= mod;

    while (b) {
        if (b & 1)
            res = (__int128)res * a % mod;

        a = (__int128)a * a % mod;
        b >>= 1;
    }

    return res;
}

int main() {
    fast();
    cout << modpow(5, 9);
    
    return 0;
}