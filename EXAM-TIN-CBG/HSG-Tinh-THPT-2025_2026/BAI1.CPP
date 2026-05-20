#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();
    // in("DOLECH");
    // out("DOLECH");

    int n; cin >> n;
    vector<int> a(n);
    int max_val = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > max_val) {
            max_val = a[i];
        }
    }
    vector<int> max_prev(2 * max_val + 2, 0);
    for (int x : a) {
        max_prev[x] = x;
    }
    for (int i = 1; i <= 2 * max_val + 1; i++) {
        if (max_prev[i] == 0) {
            max_prev[i] = max_prev[i - 1];
        }
    }
    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());
    int ans = 0;
    for (int x : a) {
        if (x <= 1) continue; 
        
        for (int k = 2 * x; k <= max_val + x; k += x) {
            int y = max_prev[k - 1];
            if (y >= x) {
                ans = max(ans, y % x);
            }
        }
    }

    cout << ans << "\n";
    return 0;
}