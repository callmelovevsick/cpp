#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();
    
    int a, b, n; cin >> a >> b >> n;
    cout << 1LL * (a / n) * (b / n);
    
    return 0;
}