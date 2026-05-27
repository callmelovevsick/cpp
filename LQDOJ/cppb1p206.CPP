#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();
    
    int n; cin >> n;
    if (n < 50) cout << n*2;
        else if (n > 70) cout << 0;
            else cout << "OH NO";
    
    return 0;
}