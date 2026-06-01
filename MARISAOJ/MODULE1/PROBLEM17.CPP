#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

long long tong(long long n) {
    long long s = 0;
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            s += i;
            if (i != n / i) {
                s += n / i;
            }
        }
    }
    return s;
}

int main() {
    fast();
    
    long long n; cin >> n;
    cout << tong(n);
    
    return 0;
}