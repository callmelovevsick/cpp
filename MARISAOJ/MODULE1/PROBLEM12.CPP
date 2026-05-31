#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

bool check(int n) {
    long long x = llround(sqrtl((long double)n));
    return x * x == n;
}

int main() {
    fast();
    
    int a;cin >> a;
    int ans = 0;
    for (int i = 1; i <= a; i++) {
        if (i == 1) ans++;
        else if (check(i)) ans++;
    }
    cout << ans;
    
    return 0;
}