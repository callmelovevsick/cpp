#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);
#define int long long

bool nt(int n) {
	if (n <= 1) return false;
	if (n <= 3) return true;
	if (n % 2 == 0 || n % 3 == 0) return false;
	for (int i = 5; i * i <= n; i += 6) {
		if (n % i == 0 || n % (i + 2) == 0) return false;
	}
	return true;
}	

signed main() {
	fast();
	int q; cin >> q;
	int ans = 0;
	while (q--) {
		int l, r; cin >> l >> r;
		for (int i = l; i <= r; i++) {
			if (nt(i)) ans++;
		}
		cout << ans << "\n";
		ans = 0;
	}	
	return 0;
}
