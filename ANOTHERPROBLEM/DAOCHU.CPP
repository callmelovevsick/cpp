#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();
    in("DAOCHU");
    out("DAOCHU");
    
    int n; cin >> n;
    while (n--) {
        pair<string, string> s; cin >> s.first >> s.second;
        cout << s.second << " " << s.first << endl;
    }
    
    return 0;
}