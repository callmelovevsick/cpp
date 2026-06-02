#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();
    
    int n; cin >> n;
    long long dau = n+1;
    long long cuoi = n*n;
    int ans = 0;
    for (int i = dau; i <= cuoi; i++) {
        ans++;
    }
    cout << ans;
    
    return 0;
}