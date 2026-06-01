#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

long long power(long long a, long long b) {
    if (b == 0) return 1;
    long long t = power(a, b/2);
    if (b % 2 == 0) return (t*t);
    return (t*t*a);
}

int main() {
    fast();
    
    string n; cin >> n;
    long long ans = 0;
    for (int i = 0; i < n.size(); i++) {
        ans += (n[i] - '0') * power(2, n.size() - 1 - i);
    }
    cout << ans;
    
    return 0;
}