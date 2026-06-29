#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);
#define int long long

signed main() {
	fast();
	int n, x; cin >> n >> x;
	vector<int> a(n);
	int ans = -1;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		int cur = ((x + a[i] - 1) / a[i]) * a[i];
		if (ans == -1 || cur < ans) ans = cur;
	}
	cout << ans;	
	return 0;
}
