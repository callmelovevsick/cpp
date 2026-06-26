#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);
#define int long long

signed main() {
	fast();
	int n; cin >> n;
	if (n % 2 == 0) cout << n / 2;
    	else cout << -(n + 1) / 2;	
	return 0;
}
