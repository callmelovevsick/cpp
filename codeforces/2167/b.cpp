#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();

    int q; cin >> q;
    while (q--) {
        string s, t;
        int n;
        cin >> n >> s >> t;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        cout << (s == t ? "YES\n" : "NO\n");
    }

    return 0;
}
