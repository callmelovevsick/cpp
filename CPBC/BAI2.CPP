#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();
    string s; cin >> s;
    int n = s.size();
    int cnt = 0;
    
    for (int l = 0; l < n; l++) {
        int mod97 = 0;
        int sum3 = 0;
        for (int r = l; r < n; r++) {
            int d = s[r] - '0';
            mod97 = (mod97 * 10 + d) % 97;
            sum3 = (sum3 + d) % 3;
            if (mod97 == 0 && sum3 == 0)
                cnt++;
        }
    }
    cout << cnt;
    
    return 0;
}