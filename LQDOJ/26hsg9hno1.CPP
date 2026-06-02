#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();
    
    long long n, k; cin >> n >> k;
    if (n-(k*7) >= 0) cout << n-(k*7);
        else cout << "-1";

    return 0;
}