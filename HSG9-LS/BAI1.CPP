#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

bool check(int n) {
    if (n % 2 != 0) return false;
    if (sqrt(n) * sqrt(n) == n && n % 2 == 0) {
        int x = sqrt(n);
        if (x % 2 == 0) return true;
    }
    return false;
}

int main() {
    fast();
    
    int n; cin >> n;
    int sum = 0, cnt = 0;
    for (int i = 4 ; i <= n; i++) {
        if (check(i)) {
            cnt++;
            sum += i;
        }
    }
    cout << cnt << "\n" << sum;
    
    return 0;
}