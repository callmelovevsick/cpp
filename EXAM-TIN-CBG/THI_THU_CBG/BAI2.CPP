#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

bool nt(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

bool is_pali(long long n) {
    long long m = 0, tmp = n;
    while (n != 0) {
        m = m * 10 + n % 10;
        n /= 10;
    }
    return tmp == m;
}

bool check(long long n) {
    long long x = sqrtl(n);
    for (long long i = x - 1; i <= x + 1; i++) {
        if (i > 1 && i * i == n) {
            if (nt(i) && is_pali(i)) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    fast();
    in("BAI2");
    out("BAI2");
    
    int t; cin >> t;
    while(t--) {
        long long a, b; cin >> a >> b;
        long long cnt = 0;
        for (long long i = a; i <= b; i++) {
            if (check(i)) cnt++;
        }
        cout << cnt << endl;
    }
    
    return 0;
}