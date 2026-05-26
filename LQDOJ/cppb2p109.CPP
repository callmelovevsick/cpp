#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();
    
    int t; cin >> t;
    int cnt = 0;
    while (t--) {
        int n, x; cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == x) cnt++;
        }
        cout << endl;
        cout << cnt << endl;
        cnt = 0;
    }
    
    return 0;
}