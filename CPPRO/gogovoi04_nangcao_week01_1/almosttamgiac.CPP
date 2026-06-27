#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);
#define int long long

signed main() {
	fast();
	int t; cin >> t;
    	while (t--) {
        	int x, a, b, c;
        	cin >> x >> a >> b >> c;
        	int ans1 = a + b - c;
        	int ans2 = x - ans1;
        	cout << ans1 << " " << ans2 << '\n';
    	}	
	return 0;
}
