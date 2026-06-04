#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();
    
    int a, b; cin >> a >> b;
    int cuoi = max(a, b);
    for (int i = 1; i <= cuoi; i++) {
        if (a % i == 0 && b % i == 0) {
            cout << i << " ";
        }
    }
    
    return 0;
}