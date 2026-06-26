#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);
#define int long long

int x[100005];
int xh[100005];

signed main() {
	fast();
	int a, b, c, n, m;
	cin >> x[0] >> a >> b >> c >> n >> m;
	for (int i = 0; i <= 100000; i++) xh[i] = -1;
	xh[x[0]] = 0;
	for (int i = 1; ; i++) {
		x[i] = ((x[i-1] + a) * c - b +m) % m;
		if (x[i] < 0) x[i] += m;
		if (xh[x[i]] != -1) {
			int dodai = i - xh[x[i]];
			int id = n - (n / dodai * dodai);
			cout << x[id];
			return 0;
		}
		xh[x[i]] = i;
	}
	return 0;
}
