#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);
#define int long long

int s(int x) {
	return x/4 + x/7 + x/11 - x/28 - x/44 - x/77 + x/308;
}

signed main() {
	fast();
	int t; cin >> t;
	while (t--) {
		int l, r; cin >> l >> r;
		if (l == 0) cout << s(r) + 1 << endl;
		else cout << s(r) - s(l-1) << endl;
	}	
	return 0;
}
