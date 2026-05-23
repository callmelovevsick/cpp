#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }

bool check(int g) {
    if (g <= 1) return true;                         
    for (int i = 2; i * i <= g; i++)
        if (g % i == 0) return false;                
    return true;                                
}

int main() {
    fast();
    
    int x, n;
    cin >> x >> n;

    vector<int> res;
    for (int y = 1; y <= n; y++)
        if (y != x && check(gcd(x, y)))
            res.push_back(y);
    cout << res.size() << "\n";
    for (int i = 0; i < (int)res.size(); i++) {
        if (i) cout << " ";
        cout << res[i];
    }
    
    return 0;
}