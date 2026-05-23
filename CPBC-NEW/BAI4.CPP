#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

const int MAXN = 5e6 + 5;
int a[MAXN];
int pre_min[MAXN];

int main() {
    fast();

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    pre_min[0] = INT_MAX;
    for (int i = 1; i <= n; i++)
        pre_min[i] = min(pre_min[i-1], a[i]);

    for (int i = 1; i <= n; i++) {
        if (i > 1) cout << ' ';

        if (pre_min[i-1] >= a[i]) {
            cout << 0;
            continue;
        }
        int lo = 1, hi = i-1, j = i-1;
        while (lo <= hi) {
            int mid = (lo + hi) / 2;
            if (pre_min[mid] < a[i]) {
                j = mid;     
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }

        cout << i - j;
    }
    cout << '\n';
    return 0;
}