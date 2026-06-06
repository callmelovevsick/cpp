#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();

    in("main");
    out("main");
    
    int n, q; cin >> n >> q;
    vector<int> a(n+1);
    int ans = 0;
    for (int i = 1; i <= n; i++) cin >> a[i];
    while (q--) {
        int l, r, x; cin >> l >> r >> x;
        for (int i = l; i <= r; i++) {
            if (a[i] == x) ans++;
        }
        cout << ans << endl;
        ans = 0;
    }
    
    return 0;
}