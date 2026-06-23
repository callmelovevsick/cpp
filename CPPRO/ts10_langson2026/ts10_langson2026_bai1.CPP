#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);
#define int long long

const int MAXN = 1e7+9;
int a[MAXN];

signed main() {
	fast();
	int n; cin >> n;
	int minn = 1e7;
	int s = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] < 0) s += a[i];
		if (a[i] > 0) minn = min(minn, a[i]);
	}
	cout << s << "\n" << minn;	
	return 0;
}
