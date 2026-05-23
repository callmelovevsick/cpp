#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1e9 + 7;
#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();
    
    int n1, n2; cin >> n1 >> n2;
    if (abs(n1 - n2) > 1) { cout << 0; return 0; }
    ll ans = 1;
    for (int i = 1; i <= n1; i++) ans = ans * i % MOD;
    for (int i = 1; i <= n2; i++) ans = ans * i % MOD;  
    if (n1 == n2) ans = ans * 2 % MOD;                 
    cout << ans;
    
    return 0;
}