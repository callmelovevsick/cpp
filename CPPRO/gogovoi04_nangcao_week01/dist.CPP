#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);
#define int long long

signed main() {
	fast();
	int x1, x2, y1, y2; cin >> x1 >> y1 >> x2 >> y2;
	cout << fixed << setprecision(6) << sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));	
	return 0;
}
