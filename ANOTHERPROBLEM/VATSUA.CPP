#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();
    
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a.begin(), a.end(), greater<int>());
    long long ans = 0;
    for (int i = 0; i < n; ++i) {
        long long val = (long long)a[i] - i;
        if (val > 0) ans += val;
    }

    cout << ans;
    return 0;
}