#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);
#define int long long

signed main() {
	fast();
	int n; cin >> n;
	int ans = 0;
	for (int i = 2; i < n; i++) {
		if (n % i == 0) ans++;
	}
	cout << ans;	
	return 0;
}
