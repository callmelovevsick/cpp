#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

bool cp(int n) {
    if (n < 0) return false;
    if (n == 1) return true;
    long long x = sqrt(n);
    return x*x == n;
}

int main() {
    fast();
    
    int n; cin >> n;
    vector<int> a(n);
    int ans = 0;
    for (int &x : a) cin >> x;
    for (int i = 0; i < n; i++) {
        if (cp(a[i])) ans++;
    }
    cout << ans;

    return 0;
}