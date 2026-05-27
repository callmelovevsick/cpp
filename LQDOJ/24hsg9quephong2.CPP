#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

const int N = 1e6+5;
int d[N];

void dem(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j += i) {
            d[j]++;
        }
    }
}

int main() {
    fast();
    
    long long n; cin >> n;
    vector<long long> a(n);
    dem(n);
    for (auto &x : a) {
        cin >> x;
        if (d[x] == 3) cout << "YES" << endl;
            else cout << "NO" << endl;
    }
    
    return 0;
}