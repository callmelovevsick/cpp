#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();
    
    int a, b, c; cin >> a >> b >> c;
    if (a == b) cout << c;
    else if (a == c) cout << b;
    else if (b == c) cout << a;
    
    return 0;
}