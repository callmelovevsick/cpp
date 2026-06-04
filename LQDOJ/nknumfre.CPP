#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }

bool check(int n) {
    string tmp = to_string(n);
    reverse(tmp.begin(), tmp.end());
    int n1 = stoi(tmp);
    if (gcd(n, n1) == 1) return true;
        else return false;
}

int main() {
    fast();
    
    int a, b; cin >> a >> b;
    int ans = 0;
    for (int i = a; i <= b; i++) {
        if (check(i)) ans++;
    }
    cout << ans;
    
    return 0;
}