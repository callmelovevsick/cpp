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
		int l, r, x; cin >> l >> r >> x;
		if (l == 0) cout << r/x+1 << endl;
		else cout << r/x - (l-1)/x << endl;
	}	
	return 0;
}
