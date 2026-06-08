#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();
    
    int x, n; cin >> x >> n;
    int y = n / x;
    if (n % x == 0 && y*x == n && y > 0) cout << n / x;
        else cout << -1;
    
    return 0;
}