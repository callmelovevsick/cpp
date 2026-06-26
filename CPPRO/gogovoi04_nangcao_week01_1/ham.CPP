#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);
#define int long long

int power(int a, int n) {
	int ans = 1;
	if (n == 0) return 1;
	if (n == 1) return a;
	while (n != 0) {
		if (n % 2 == 0) ans *= a;
		n /= 2;
		a *= a;
	}
	return ans;
}

int f(int n) {
	if (n == 1) return -1;
	return f(power(-1, n) * n);
}

signed main() {
	fast();
	int n; cin >> n;
	cout << f(n);	
	return 0;
}
