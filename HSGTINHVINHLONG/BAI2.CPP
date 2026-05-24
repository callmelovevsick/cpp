#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();
    in("BAI2");
    out("BAI2");
    
    int n, k; cin >> n >> k;
    vector<int> a(n);
    int dem1 = 0, dem2 = 0, dem3 = 0;
    for (int &x : a) cin >> x;
    while (k--) {
        int x, y; cin >> x >> y;
        for (int i = x; i <= y; i++) {
            if (a[i] == 1) dem1++;
                else if (a[i] == 2) dem2++;
                    else if (a[i] == 3) dem3++;
        }
        cout << dem1 << " " << dem2 << " " << dem3 << "\n";
        dem1 = dem2 = dem3 = 0;
    }
    
    return 0;
}