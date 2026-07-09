#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();

    int n; cin >> n;
    vector<int> a(n);
    long long s = 0;
    for (int i = 0; i < n-1; i++) {
        cin >> a[i];
        s += a[i];
    }
    int s1 = n*(n+1)/2;
    cout << s1 - s;

    return 0;
}
