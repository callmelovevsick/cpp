#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();

    int n; cin >> n;
    vector<int> a(n);
    vector<int> b;
    vector<int> c;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] < 0) b.push_back(a[i]);
        if (a[i] >= 0) c.push_back(a[i]);
    }
    for (auto &x : b) cout << x << " ";
    for (auto &x : c) cout << x << " ";

    return 0;
}
