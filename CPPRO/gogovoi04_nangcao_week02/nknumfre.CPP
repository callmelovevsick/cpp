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

bool check(int n) {
	string tmp = to_string(n);
	reverse(tmp.begin(), tmp.end());
	int tmp1 = stoi(tmp);
	if (gcd(tmp1, n) == 1) return true;
	else return false;
}

signed main() {
	fast();
	int a, b; cin >> a >> b;
	int ans = 0;
	for (int i = a; i <= b; i++) {
		if (check(i)) ans++;
	}
	cout << ans;	
	return 0;
}
