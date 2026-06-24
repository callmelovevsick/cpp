#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);
#define int long long

int gcd(int a, int b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}

signed main() {
	fast();
	int t; cin >> t;
	while (t--) {
		int a, b; cin >> a >> b;
		if (b != 0) {
			cout << a / gcd(a, b) << "/" << b / gcd(a, b) << endl;
			
		} else if (a == 0) cout << "0/1" << endl;	
	return 0;
}
