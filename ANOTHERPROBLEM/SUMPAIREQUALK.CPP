#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();
    
    int n, k; cin >> n >> k;
    vector<int> a(n);
    vector<int> prefix(n+1, 0);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        prefix[i+1] = prefix[i] + a[i];
    }
    int l = 0, r = n-1;
    int ans = 0;
    while (l < r) {
        int sum = a[l] + a[r];
        if (sum == k) {
            ans++;
        } else if (sum < k) {
            l++;
        } else {
            r--;
        }
    }
    cout << ans;
    
    return 0;
}