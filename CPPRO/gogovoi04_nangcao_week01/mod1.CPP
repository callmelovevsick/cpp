#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);
#define int long long

const int MOD = 1e9+7;

signed main() {
	fast();
	string n; cin >> n;
	int ans = 0;
	for (char c : n) ans = (ans * 10 + (c - '0')) % MOD;
	cout << ans;
	return 0;
}
