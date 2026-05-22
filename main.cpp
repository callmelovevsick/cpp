#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();
    
    int n; cin >> n;
    map<int, string> m;
    for (int i = 0; i < n; i++) {  
        int x; string s; cin >> x >> s;
        m[x] = s;
    }
    int lo = 50, hi = 90;
    for (auto it = m.lower_bound(lo); it != m.upper_bound(hi); it++) {
        cout << it->first << " " << it->second << "\n";
    }
    
    return 0;
}