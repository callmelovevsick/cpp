#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

long long t(int n) {
    long long s = 0;
    for (int i = 1; i <= n;i++) {
        if (n % i == 0) s += i;
    }
    return s;
}

int main() {
    fast();
    
    long long a, b, c; cin >> a >> b >> c;
    long long best = max(t(a), t(b));
    cout << max(best, t(c));
    
    return 0;
}