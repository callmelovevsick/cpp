#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);
#define int long long

signed main() {
	fast();
	int t; cin >> t;
	while (t--) {
		int n, m; cin >> n >> m;
		if ( m < 2*n || (m - 2 * n) % 2 != 0) cout << "-1" << endl;
		else {
			int cho = (m - 2 * n) / 2;
			int ga = n - cho;
			cout << ga << " " << cho << endl;
		}
	}	
	return 0;
}
