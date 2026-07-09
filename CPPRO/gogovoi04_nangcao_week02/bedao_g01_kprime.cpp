#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

const int MAXN = 1e7+5;
int prime[MAXN];

void sieve(int n) {
    fill(prime, prime+n+1, 1);
    prime[0] = prime[1] = 0;
    for (int i = 2; i * i <= n; i++) {
        if (prime[i]) {
            for (long long j = (long long)i * i; j <= n; j += i) {
                prime[j] = 0;
            }
        }
    }
}

int main() {
    fast();

    int n, k; cin >> n >> k; 
    sieve(n);
    long long ans = 0;
    int l = 1;
    int count = 0;
    for (int r = 1; r <= n; r++) {
        if (prime[r]) count++;
        while (count >= k) {
            ans += (n-r+1);
            if (prime[l]) count--;
            l++;
        }
    }
    cout << ans;

    return 0;
}
