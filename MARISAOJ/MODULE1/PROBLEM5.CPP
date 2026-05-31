#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();
    
    long long a, b, c; cin >> a >> b >> c;
    long long max1 = max(a, b);
    long long min1 = min(a, b);
    cout << min(min1, c) << " " << max(max1, c);
    
    return 0;
}