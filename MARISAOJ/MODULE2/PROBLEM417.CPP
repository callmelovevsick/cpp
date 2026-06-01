#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();
    
    long long a, b, k; cin >> a >> b >> k;
    long long x = a, digit;
    for (int i = 1; i <= k; i++) {
        x *= 10;
        digit = x / b;
        x %= b;
    }
    cout << digit;
    
    return 0;
}