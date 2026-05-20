#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();

    string s; cin >> s;
    int n = s.size();
    int best = 0;

    for (int i = 0; i < n; i++) {
        int l = i, r = i;
        while (l >= 0 && r < n && s[l] == s[r]) {
            best = max(best, r - l + 1);
            l--; r++;
        }

        l = i; r = i + 1;
        while (l >= 0 && r < n && s[l] == s[r]) {
            best = max(best, r - l + 1);
            l--; r++;
        }
    }

    cout << best;
    return 0;
}
