#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

bool check(int n) {
    if (n == 1) return true;
    int x = sqrt(n);
    return x*x == n;
}

int main() {
    fast();
    
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < a.size(); ) {
        if (check(a[i])) {
            a.erase(a.begin() + i);
        } else {
            i++;
        }
    }
    int ans = a[0];
    for (auto x : a) {
        ans = max(ans, x);
    }
    cout << ans;
    
    return 0;
}