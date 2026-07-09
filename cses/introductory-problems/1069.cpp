#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();

    string a; cin >> a;
    int maxs = 0;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == a[i]+1) maxs++;
    }
    cout << maxs;

    return 0;
}
