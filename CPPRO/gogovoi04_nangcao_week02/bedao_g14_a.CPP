#include <bits/stdc++.h>
using namespace std;

#define DangThiThuTrang ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);
#define int long long

signed main() {
	DangThiThuTrang;
	int n; cin >> n;
	vector<int> a(n+1);
	for (int i = 0; i < n; i++) cin >> a[i];
	sort(a.begin(), a.end()+1);
	for (int i = 0; i < n; i++) {
		if (a[i] + 1 == a[i+1]) {
			cout << a[i] << " " << a[i+1];
			return 0;
		}
	}
	cout << "-1 -1"; 	
	return 0;
}
