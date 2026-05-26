#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

long long giai_thua(int n) {
    if (n == 0) return 1;
    return n * giai_thua(n-1);
}

int main() {
    fast();
    
    int n; cin >> n;
    string tmp = to_string(giai_thua(n));
    int cnt = 0;
    reverse(tmp.begin(), tmp.end());
    cout << tmp << "\n";
    for (int i = 0; i < tmp.size(); i++) {
        if (tmp[i] == '0' && tmp[i+1] == '0') {
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}