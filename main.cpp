#include <bits/stdc++.h>
using namespace std;

int celsius(string s) {
    int ans = 0;
    for (int i = 0; i < (int)s.size(); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            ans = ans * 10 + (s[i] - '0');
        }
    }
    return fixed << setprecision(2) << ans * 9 / 5 + 32;
}
int fahrenheit(string s) {
    int ans = 0;
    for (int i = 0; i < (int)s.size(); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            ans = ans * 10 + (s[i] - '0');
        }
    }
    return fixed << setprecision(2) << (ans - 32) * 5 / 9;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s; cin >> s;
    for (int i = 0; i < (int)s.size(); i++) {
        if (s[i] == 'C') {
            cout << fixed << setprecision(2) << celsius(s);
            return 0;
        }
    }
    cout << fixed << setprecision(2) << fahrenheit(s);
    return 0;
}