#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);
#define int long long

int s(int n, int k) {
	int m = n/k;
	return k*m*(m+1)/2;
}

signed main() {
	fast();
	int l, r, k; cin >> l >> r >> k;
	cout << s(r, k) - s(l-1, k);	
	return 0;
}
