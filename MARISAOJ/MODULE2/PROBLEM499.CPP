#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();
    
    long long l, r; cin >> l >> r;
    for (int i = l; i <= r; i++) {
        cout << i << " ";
    }
    
    return 0;
}