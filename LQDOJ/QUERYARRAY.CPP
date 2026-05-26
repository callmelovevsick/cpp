#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();
    // in("QUERYARRAY");
    // out("QUERYARRAY");
    
    int n, q; cin >> n >> q;
    vector<int> a(n, 0);
    while (q--) {
        int t, l, r, x; cin >> t >> l >> r >> x;
        if (t == 1) {
            for (int i = l-1; i < r; i++) a[i] += x;
        } else if (t == 2) { 
            for (int i = l-1; i < r; i++) a[i] -= x;
        }
    }
    
    for (auto &x :a) cout << x << " ";
    
    return 0;
}