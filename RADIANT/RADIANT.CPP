-- https://radiant.lovevsick.xyz/share/radiant
#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);
#define int long long

signed main() {
	fast();
	int n, q; cin >> n >> q;
	vector<int> a(n);
	for (int i = 0; i < n; i++) cin >> a[i];
	sort(a.begin(), a.end());
	
	while(q--) {
		int x; cin >> x;
		auto it = lower_bound(a.begin(), a.end(), x);
		cout << a.end() - it << endl;
	}
	return 0;
}
