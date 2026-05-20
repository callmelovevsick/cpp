#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

bool nt(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

bool check(int n) {
    string tmp = to_string(n);
    reverse(tmp.begin(), tmp.end());
    int tmp1 = stoi(tmp);
    if (nt(n) && nt(tmp1)) return true;
        else return false;
}

int main() {
    fast();
    // in("BAI2");
    // out("BAI2");
    
    int n, q; cin >> n >> q;
    vector<int> a(n);
    for (auto &x : a) cin >> x;
    while (q--) {
        int dem = 0;
        int l, r; cin >> l >> r;
        for (int i = l-1; i < r; i++) {
            if (check(a[i])) dem++;
        }
        cout << dem << endl;
        dem = 0;
    }
    
    return 0;
}