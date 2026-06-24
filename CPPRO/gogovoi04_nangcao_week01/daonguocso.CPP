#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);
#define int long long

signed main() {
	fast();
	string n; cin >> n;
	reverse(n.begin(), n.end());
	for (int i = 0; i < n.size(); i++) {
		if (n[i] != '0') cout << n[i];
	}	
	return 0;
}
