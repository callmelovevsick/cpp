#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

long long giai_thua(long long n) {
    if (n == 1) return 1;
    return giai_thua((n-1))*n;
}

int dem(long long n) {
    string tmp = to_string(n);
    int cnt = 0;
    reverse(tmp.begin(), tmp.end());
    for (int i = 0; i < tmp.size(); i++) {
        if (tmp[i] == '0') cnt++;
    }
    return cnt;
}

int main() {
    fast();
    
    long long n; cin >> n;
    cout << dem(giai_thua(n));
    
    return 0;
}