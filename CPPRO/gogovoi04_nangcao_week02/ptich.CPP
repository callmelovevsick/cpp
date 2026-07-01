#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);
#define int long long

signed main() {
	fast();
	int n; cin >> n;
	bool f = 0;
	int ans = 0;
	for (int i = 2; i <= n; i++) {
		if (n % i == 0) {
			int cnt = 0;		
			while (n % i == 0) {
				cnt++;
				n /= i;
				if (f) cout << "*" << i;
				else cout << i, f-1;
			}
		ans *= cnt+1;
		}	
	}
	cout << endl;
	cout << ans;
	return 0;
}
