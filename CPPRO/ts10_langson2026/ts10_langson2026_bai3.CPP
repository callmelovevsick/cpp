#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);
#define int long long

const int MAXN = 1e9+7;
int a[MAXN];

signed main() {
	fast();
	int n, k; cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		prefix[i] = prefix[i-1] + a[i];	
	}
	int l = 0;
	for (int r = 0; r < n; r++) {
		int s = a[l] - a[r-1];
		
	return 0;
}
