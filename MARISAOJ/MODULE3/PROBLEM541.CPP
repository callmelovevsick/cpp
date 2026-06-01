#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();
    
    int n; cin >> n;
    vector<int> a(n);
    long long s = 0;
    int dem = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        s += a[i];
        dem++;
    }
    cout << fixed << setprecision(3) << (double)s/dem;
    
    return 0;
}