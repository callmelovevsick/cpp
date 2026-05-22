#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int q = 0, cnt = 0, k = 0;

int tan_cung(int n) {
    string tmp = to_string(n);
    reverse(tmp.begin(), tmp.end());
    string t = "";
    for (int i = 0; i < 2; i++) {
        t += tmp[i];
    }
    reverse(t.begin(), t.end());
    return stoi(t);
}

bool check(int n) {
    if (tan_cung(n) % k == 0) return true;
        else return false;
}

int main() {
    fast();
    in("FUNNY");
    out("FUNNY");
    
    cin >> q >> k;
    while(q--) {
        int l, r; cin >> l >> r;
        for (int i = l; i <= r; i++) {
            if (check(i)) cnt++;
        }
        cout << cnt << endl;
        cnt = 0;
    }
    
    return 0;
}