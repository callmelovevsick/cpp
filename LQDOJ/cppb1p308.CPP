#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

long long giai_thua(int n) {
    if (n == 0) return 1;
    return n * giai_thua(n-1);
}

int main() {
    fast();
    
    int k, n; cin >> k >> n;
    cout << giai_thua(n) / giai_thua(k) / giai_thua(n-k);
    
    return 0;
}