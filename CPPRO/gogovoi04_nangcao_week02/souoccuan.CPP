#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

signed main() {
	fast();
	int n; cin >> n;
	int ans = 0;
	for (long long i = 1; i * i <= n; i++) {
        	if (n % i == 0) {
            		ans++;
            		if (i != n / i) ans++;
        	}
    	}
	cout << ans;
	return 0;
}
