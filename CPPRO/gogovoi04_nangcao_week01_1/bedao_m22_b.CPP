#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);
#define int long long

signed main() {
	fast();
	int n; cin >> n;
    	vector<int> a(n + 1);
    	for (int i = 1; i <= n; i++) cin >> a[i];
    	int ans = 0;
    	int cnt[23] = {};
    	for (int j = 1; j <= n; j++) {
        	if (j - 6 >= 1) cnt[a[j - 6] % 23]++;
        	ans += cnt[a[j] % 23];
    	}
    	cout << ans;	
	return 0;
}
