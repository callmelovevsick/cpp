#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();
    
    string s;
    char ch;
    getline(cin, s); cin >> ch;
    int ans = 0;
    for (int i = 0; i < (int)s.size(); i++) {
        if (s[i] == ch) ans++;
    }
    cout << ans;
    
    return 0;
}