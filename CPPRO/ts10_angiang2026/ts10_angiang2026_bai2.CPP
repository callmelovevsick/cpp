#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);
#define int long long

const int MAXN = 1007;
int a[MAXN];

signed main() {
	fast();
	int n; cin >> n;
	int ans1 = 0, ans2 = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] % 2 == 0) ans1++;
		ans2 += a[i];
	}
	cout << ans1 << "\n" << ans2;
	return 0;
}
