#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

bool cp(int n) {
    if (n < 4) return false;
    long long x = sqrt(n);
    return x*x == n;
}

int main() {
    fast();
    
    int n; cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ans = 0;
    for (int l = 0; l < n; l++) {
        for (int r = l; r < n; r++) {
            if (cp(a[l] * a[r])) {
                ans++;
            }
        }
    }
    cout << ans;
    
    return 0;
}