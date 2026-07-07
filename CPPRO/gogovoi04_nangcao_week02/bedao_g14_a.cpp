#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

const int N = 1e5 + 5;
int n, a[N];

int main() {
    fast();

    cin >> n;
    for (int i = 1; i <= n+1; i++) cin >> a[i];
    sort(a + 1, a + n + 2);
    for (int i = 1; i <= n; i++) {
        if (a[i] + 1 == a[i+1]) {
            cout << a[i] << " " << a[i+1];
            return 0;
        }
    }
    cout << "-1 -1";

    return 0;
}
