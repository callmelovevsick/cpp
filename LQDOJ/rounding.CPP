#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();

    int t;
    if (cin >> t) {
        while (t--) {
            string s;
            cin >> s;
            int last_digit = s.back() - '0';
            if (last_digit >= 1 && last_digit <= 5) {
                s.back() = '0';
            } 
            else if (last_digit >= 6 && last_digit <= 9) {
                s.back() = '0';
                int carry = 1;
                for (int i = (int)s.length() - 2; i >= 0 && carry > 0; --i) {
                    int current_val = (s[i] - '0') + carry;
                    if (current_val >= 10) {
                        s[i] = (current_val - 10) + '0';
                        carry = 1;
                    } else {
                        s[i] = current_val + '0';
                        carry = 0;
                    }
                }          
                if (carry > 0) {
                    s = "1" + s;
                }
            }            
            cout << s << "\n";
        }
    }

    return 0;
}