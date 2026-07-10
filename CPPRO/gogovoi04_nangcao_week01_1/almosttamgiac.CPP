#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);
#define int long long

int x[205], y[205];

signed main() {
	fast();
	int n; cin >> n;
	for (int i = 0; i < n; i++) cin >> x[i] >> y[i];
	double ans = 1e100;
	for (int i = 0; i < n; i++) {
        	for (int j = i + 1; j < n; j++) {
            		for (int k = j + 1; k < n; k++) {
                		long long cross = 1LL * (x[j] - x[i]) * (y[k] - y[i]) - 1LL * (y[j] - y[i]) * (x[k] - x[i]);
                		if (cross == 0) continue;
                		long long d1 = 1LL * (x[i] - x[j]) * (x[i] - x[j]) + 1LL * (y[i] - y[j]) * (y[i] - y[j]);
                		long long d2 = 1LL * (x[i] - x[k]) * (x[i] - x[k]) + 1LL * (y[i] - y[k]) * (y[i] - y[k]);
                		long long d3 = 1LL * (x[j] - x[k]) * (x[j] - x[k]) + 1LL * (y[j] - y[k]) * (y[j] - y[k]);
                		long long mn = min(d1, min(d2, d3));
                		long long mx = max(d1, max(d2, d3));
                		ans = min(ans, sqrt(1.0 * mx / mn));
            		}
        	}
    	}
    	if (ans == 1e100) cout << -1;
   	else cout << fixed << setprecision(6) << ans;
	return 0;
}
