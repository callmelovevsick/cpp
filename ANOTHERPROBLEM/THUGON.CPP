#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();
    
    string s;
    while (getline(cin, s)) {
        if (s.empty()) continue;

        string ans = "";
        int i = 0;

        while (i < s.size()) {
            char ch = s[i];
            int count = 1;

            while (i + count < s.size() && s[i + count] == ch)
                count++;

            if (count > 1)
                ans += to_string(count);
            ans += ch;

            i += count;
        }

        cout << ans << "\n";
    }
    
    return 0;
}