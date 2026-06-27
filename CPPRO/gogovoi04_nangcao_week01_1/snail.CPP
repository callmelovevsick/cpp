#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);
#define int long long

signed main() {
	fast();
	int n, t; cin >> n >> t;
    	int block = n / 4;
    	int ans = t + block * 2;
    	int r = n % 4;
    	if (r >= 1) ans -= (2 * block + 1);
   	if (r >= 2) ans -= (2 * block + 1);
    	if (r >= 3) ans += (2 * block + 2);
    	cout << ans;	
	return 0;
}
