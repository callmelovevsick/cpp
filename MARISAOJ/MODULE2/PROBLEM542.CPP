#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

long long giai_thua(long long n) {
    if (n == 1) return 1;
    return giai_thua((n-1))*n;
}

int main() {
    fast();
    
    long long n; cin >> n;
    cout << giai_thua(n);
    
    return 0;
}