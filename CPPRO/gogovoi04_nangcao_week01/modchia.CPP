#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);
#define int long long

const int MOD = 1e9 + 7;
const int MAXN = 3000005; 

int s[MAXN]; 

void love() {
    s[0] = 0;
    for (int i = 1; i <= 3000000; ++i) {
        int cur = (i * i) % MOD; 
        s[i] = (s[i - 1] + cur) % MOD;
    }
}

signed main() {
    fast();
    love(); 
    int t; 
    if (cin >> t) {
        while (t--) {
            int n; cin >> n;
            cout << s[n] << endl;
        }
    }
    return 0;
}