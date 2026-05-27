#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();
    
    int a, b, c; cin >> a >> b >> c;
    int cnt = 0;
    for (int i = a; i <= b; i++) {
        if (i % c == 0) cnt++;
    }
    cout << cnt;
    
    return 0;
}