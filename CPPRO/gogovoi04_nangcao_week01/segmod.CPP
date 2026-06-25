#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);
#define int long long

const int MOD = 1e9+7;

int power(int a, int n) {
	if (b == 0) return 1;
	if (b == 1) return a;
	int ans = 1;
	a %= MOD;
	while (n != 0) {
		if (n % 2 == 1) ans = ans * a % MOD;
		n /= 2;
		a = a * a % MOD;
	}
	return ans;
}

signed main() {
	fast();
	int n, m, k; cin >> n >> m >> k;
	cout << power(m, k-1) % MOD;	
	return 0;
}
