#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int nhi_phan(int n) {
    if (n == 0) return 0;
    return (n % 2) + 10 * nhi_phan(n / 2);
}

int main() {
    fast();
    
    int n; cin >> n;
    cout << nhi_phan(n);
    
    return 0;
}