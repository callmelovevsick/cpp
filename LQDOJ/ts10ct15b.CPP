#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".INP", "r", stdin);
#define out(file) freopen(file ".OUT", "w", stdout);

int main() {
    fast();
    in("DAYSOTCP");
    out("DAYSOTCP");
    
    long long n, k; cin >> n;
    k = sqrt(n);
    cout << 2*k-1;
    
    return 0;
}