#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);
#define int long long

const int MOD = 1e9+7;

int s(int n) {
	int tmp = n % MOD;
	return (tmp*(tmp+1)*(2*tmp+1))/6;
}

signed main() {
	fast();
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		cout << s(n) % MOD << endl;
	}	
	return 0;
}
