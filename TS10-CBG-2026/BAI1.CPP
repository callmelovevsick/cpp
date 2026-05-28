#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();
    
    int n; cin >> n;
    long long c0 = 0, c1 = 0, c2 = 0;
    for (int i = 0; i < n; ++i) {
        long long val;
        cin >> val;
        int rem = val % 3;
        if (rem == 0) c0++;
        else if (rem == 1) c1++;
        else if (rem == 2) c2++;
    }
    long long ans = (c0 * (c0 - 1)) / 2 + (c1 * c2);
    cout << ans;
    
    return 0;
}