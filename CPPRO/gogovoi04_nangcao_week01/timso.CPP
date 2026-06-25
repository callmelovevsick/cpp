#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);
#define int long long

signed main() {
	fast();
	int n; cin >> n;
	int r = 1 % n;
	for (int i = 1; ; i++) {
		if (r == 0) {
			cout << i;
			break;
		}
		r = (r * 10 + 1) % n;
	}	
	return 0;
}
