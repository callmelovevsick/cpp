#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();
    
    string s; getline(cin, s);
    if (s.size() < 4) {
        cout << "Invalid";
        return 0;
    }
    bool lower = false, upper = false, digit = false;
    for (char c : s) {
        if (!isalnum((unsigned char)c)) { 
            cout << "Invalid";
            return 0;
        }
        if (islower(c)) lower = true;
        if (isupper(c)) upper = true;
        if (isdigit(c)) digit = true;
    }
    if (lower && upper && digit && s.size() >= 8) {
        cout << "Strong";
    } else {
        cout << "Weak";
    }

    return 0;
}