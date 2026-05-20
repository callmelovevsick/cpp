#include <bits/stdc++.h>
using namespace std;

double celsius(string s) {
    double ans = 0;
    bool negative = false;
    for (int i = 0; i < (int)s.size(); i++) {
        if (s[i] == '-') negative = true;
        if (s[i] >= '0' && s[i] <= '9') {
            ans = ans * 10 + (s[i] - '0');
        }
        if (s[i] == '.') break;
    }
    if (negative) ans = -ans;
    return ans * 9.0 / 5.0 + 32.0;
}
double fahrenheit(string s) {
    double ans = 0;
    bool negative = false;
    for (int i = 0; i < (int)s.size(); i++) {
        if (s[i] == '-') negative = true;
        if (s[i] >= '0' && s[i] <= '9') {
            ans = ans * 10 + (s[i] - '0');
        }
        if (s[i] == '.') break;
    }
    if (negative) ans = -ans;
    return (ans - 32.0) * 5.0 / 9.0;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s; cin >> s;
    cout << fixed << setprecision(2);
    for (int i = 0; i < (int)s.size(); i++) {
        if (s[i] == 'C' || s[i] == 'c') {
            cout << celsius(s) << "F";
            return 0;
        }
        if (s[i] == 'F' || s[i] == 'f') {
            cout << fahrenheit(s) << "C";
            return 0;
        }
    }
    return 0;
}