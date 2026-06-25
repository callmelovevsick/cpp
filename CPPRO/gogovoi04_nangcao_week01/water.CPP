#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);
#define int long long

signed main() {
	fast();
	double x, y, z;
    	cin >> x >> y >> z;
    	double tocdo = 1.0 / x + 1.0 / y - 1.0 / z;
    	if (tocdo <= 0) {
        	cout << -1;
        	return 0;
    	}
    	double tg = 1.0 / tocdo;
    	cout << fixed << setprecision(6) << tg;	
	return 0;
}
