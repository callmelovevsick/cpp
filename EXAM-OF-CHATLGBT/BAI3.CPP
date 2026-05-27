#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();
    
    int n; cin >> n;
    vector<int> a(n);
    int f[1000005];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) {
        f[i] = 1;
        for (int j = 1; j < i; j++) {
            if (a[i] > a[j]) {
                f[i] = max(f[i], f[j]+1 + f[i]);
            }
        }
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        ans = max(ans, f[i]);
    }
    cout << ans;
    
    return 0;
}