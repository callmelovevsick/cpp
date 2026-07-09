#include <bits/stdc++.h>
#include <iterator>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();

    string a; cin >> a;
    int curr = 1;
    int maxc = 1;
    char prev_c = a[0];
    for (int i = 1; i < a.size(); i++) {
        if (a[i] == prev_c) {
            curr++;
        } else {
            curr = 1;
            prev_c = a[i];
        }
        maxc = max(maxc, curr);
    }
    cout << maxc;

    return 0;
}
