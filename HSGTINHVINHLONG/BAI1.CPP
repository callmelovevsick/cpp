#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int do_dep(string s) {
    int res = 0;
    int sum = 0;
    for (int i = 0; i < (int)s.size(); i++) {
        if (isdigit(s[i])) {
            res++;
            sum += s[i] - '0';
        }
    }
    return (long long)sum/res;
}

int main() {
    fast();
    
    int n; cin >> n;
    string ans = "";
    int d = 0;
    while (n--) {
        string s; cin >> s;
        if (do_dep(s) > d) {
            ans = s;
        }
    }
    cout << ans;
    
    return 0;
}