#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);
#define int long long

int power(int a, int n) {
	int ans = 1;
	while (n != 0) {
		if (n % 2 == 1) ans *= a;
		n /= 2;
		a *= a;
	}
	return ans;
}

signed main() {
	fast();
	int t; cin >> t;
	while (t--) {
		int a, d, q, n; cin >> a >> d >> q >> n;
		cout << a + (n-1) * d << " " << n * (2 * a +(n-1) * d)/2 << " " << a * power(q, n-1) << " ";	
		if (q == 1) cout << a * n << endl;
		else cout << a * (power(q, n)-1)/(q-1) << endl;
	}
	return 0;
}
