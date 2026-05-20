#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();

    int n; cin >> n;
    vector<long long> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    long long prev = -1e18;
    for (int i = 0; i < n; i++) {
        long long x = -abs(a[i]);
        long long y = abs(a[i]);
        if (x >= prev) {
            b[i] = x;
        }
        else if (y >= prev) {
            b[i] = y;
        }
        else {
            cout << "No";
            return 0;
        }
        prev = b[i];
    }
    cout << "Yes\n";
    for (int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }
    return 0;
}