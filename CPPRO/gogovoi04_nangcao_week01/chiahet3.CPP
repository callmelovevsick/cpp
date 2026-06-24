#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);
#define int long long

int dem(int n) {
	return n / 4 + n / 10 - n / 20;
}

signed main() {
	fast();
	int l, r; cin >> l >> r;
	cout << dem(r) - dem(l - 1);	
	return 0;
}
