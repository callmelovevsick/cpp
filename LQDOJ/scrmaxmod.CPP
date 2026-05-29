#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();
    
    long long x, y, n; cin >> x >> y >> n;
    long long ans = (n / x) * x + y;
    if (ans > n) {
        ans -= x;
    }
    cout << ans << "\n";
    
    return 0;
}