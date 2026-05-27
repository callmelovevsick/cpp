#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();
    
    int n, p; cin >> n >> p;
    vector<int> a(n);
    for (int &x : a) cin >> x;
    vector<int> prefix(n+1, 0);
    for (int i = 1; i <= n; i++) {
        prefix[i] = prefix[i-1] + a[i-1];
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) { 
        for (int j = i; j <= n; j++) {
            long long sum = prefix[j] - prefix[i-1];
            if (sum <= p) {
                ans = max(ans, j - i + 1);
            }
        }
    }
    cout << ans;
    
    return 0;
}