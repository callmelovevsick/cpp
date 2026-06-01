#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }

int main() {
    fast();
    
    int a, b ;cin >> a >> b;
    int x = gcd(a, b);
    cout << a/x << " " << b/x;
    
    return 0;
}