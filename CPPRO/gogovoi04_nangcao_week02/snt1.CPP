#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);
#define int long long

int nt[1000005];

signed main() {
	fast();
	int t; cin >> t;
	while (t--) {
		int l, r; cin >> l >> r;
		for (int i = 0; i < r - l + 1; i++) nt[i] = 0;
		for (int i = 2; i * i <= r; i++) {
			for (int j = max(i*i, (l+i-1)/i*i); j <= r; j += i) {
				nt[j - l] = 1;
			}
		}
		int res = 0;
		for (int i = 0; i < r - l + 1; i++) {
			if (i+l >= 2 && nt[i] == 0) res++
		}
		cout << res << "\n";		
	}
	return 0;
}
