#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();
    
    int n, k; cin >> n >> k;
    vector<int> a(n);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int l = 0;
    long long s = 0;
    for (int r = 0; r < n; r++) {
        s += a[r];
        while (s > k) {
            s -= a[l];
            l++;
        }
        ans = max(ans, r-l+1);
    }
    cout << ans;
    
    return 0;
}