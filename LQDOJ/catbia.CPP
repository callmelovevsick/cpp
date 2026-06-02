#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }

int main() {
    fast();
    
    int x, y; cin >> x >> y;
    cout << (x / gcd(x, y)) * (y / gcd(x, y));
    
    return 0;
}