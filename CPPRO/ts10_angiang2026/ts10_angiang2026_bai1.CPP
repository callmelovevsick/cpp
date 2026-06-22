#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);
#define int long long

signed main() {
	fast();
	int a, b, c; cin >> a >> b >> c;
	int maxn = max(a, b);
	cout << max(maxn, c);
	return 0;
}
