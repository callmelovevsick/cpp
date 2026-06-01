#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();
    
    long long n; cin >> n;
    long long ans = 0;
    long long i = 1;
    while(i < n) {
        ans++;
        i *= 2;
    }
    cout << ans;
    
    return 0;
}