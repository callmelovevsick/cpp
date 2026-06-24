#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);
#define int long long

signed main() {
	fast();
	string n; cin >> n;
	int ans1 = n.size();
	int ans2 = 0;
	for (int i = 0; i < n.size(); i++) ans2 += n[i] - '0';
	cout << ans1 << endl << ans2;	
	return 0;
}
