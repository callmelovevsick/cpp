#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);
#define int long long

signed main() {
	fast();
	int a, b, c; cin >> a >> b >> c;
	int ans = 1;
	for (int i = a; i <= b; i++) {
		ans = (ans * (i % c)) % c;
	}
	cout << ans;	
	return 0;
}
