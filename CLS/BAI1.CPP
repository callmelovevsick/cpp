#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();
    
    int n; cin >> n;
    double s = 0;
    for (int i = 1; i < n; i++) {
        s += 1.0 / (i * (i + 1));
    }
    cout << fixed << setprecision(5) << s;
    
    return 0;
}