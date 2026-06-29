#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);
#define int long long

bool nt(int n) {
	if (n <= 1) return false;
	if (n <= 3) return true;
	if (n % 2 == 0 || n % 3 == 0) return false;
	for (int i = 5; i*i <= n; i += 6) {
		if (n % i == 0 || n % (i + 2) == 0) return false;
	}
	return true;
}

int s(int n) {
	int ans = 0;
	while (n != 0) {
		ans += n % 10;
		n /= 10;
	}
	return ans;
}

bool check(int n) {
	if (nt(n) && s(n) % 5 == 0) return true;
	else return false;
}

signed main() {
	fast();
	int l, r; cin >> l >> r;
	int ans = 0;
	for (int i = l; i <= r; i++) {
		if (check(i)) ans++;
	}
	cout << ans;		
	return 0;
}
