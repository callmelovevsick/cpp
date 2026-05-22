#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int k; string s;

int main() {
    fast();
    
    cin >> k >> s;
    int n = s.size();
    long long cost = 0;
    int ans = 0;
    for (char c = 'a'; c<= 'z'; c++) {
        int l = 0;
        for (int r = 0; r <= n; r++) {
            cost += abs(s[r] - c);
            while (cost > k) {
                cost -= abs(s[l] - c);
                l++;
            }
            ans = max(ans, r - l + 1);
        }
    }
    cout << ans;
    
    return 0;
}