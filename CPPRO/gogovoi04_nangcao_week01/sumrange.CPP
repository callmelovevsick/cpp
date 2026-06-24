#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);
#define int long long

int s1(int x) {
	return x * (x + 1) / 2;
}

int s2(int x) {
	return x*(x+1)*(2*x+1) / 6;
}

int s3(int x) {
	return (x*(x+1)/2)*(x*(x+1)/2);
}

signed main() {
	fast();
	int t; cin >> t;
	while (t--) {
		int l, r; cin >> l >> r;
		cout << s1(r) - s1(l-1) << " " << s2(r) - s2(l-1) << " " << s3(r) - s3(l-1) << endl;
	}	
	return 0;
}
