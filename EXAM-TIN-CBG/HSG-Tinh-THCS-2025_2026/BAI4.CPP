#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();
    // in("XANHAT");
    // out("XANHAT");

    int n;
    long long p; cin >> n >> p;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    vector<long long> lmin(n);
    lmin[0] = a[0];
    for (int i = 1; i < n; ++i) {
        lmin[i] = min(lmin[i - 1], a[i]);
    }
    vector<long long> rmax(n);
    rmax[n - 1] = a[n - 1] - p;
    for (int i = n - 2; i >= 0; --i) {
        rmax[i] = max(rmax[i + 1], a[i] - p);
    }
    int i = 0, j = 0;
    int ans = 0;
    while (i < n && j < n) {
        if (lmin[i] <= rmax[j]) {
            ans = max(ans, j - i);
            j++; 
        } else {
            i++; 
        }
    }
    cout << ans;
    
    return 0;
}