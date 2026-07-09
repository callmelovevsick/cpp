#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();

    long long t; cin >> t;
    while (t--) {
        long long a, b, c, d; cin >> a >> b >> c >> d;
        if (a == b && a == c && b == c && c == d) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
