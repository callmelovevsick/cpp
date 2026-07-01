#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);
#define int long long

const int MAXA = 1000000;
int spf[MAXA + 1];

signed main() {
	fast();
	for (int i = 0; i <= MAXA; i++) spf[i] = i;
	for (int i = 2; i * i <= MAXA; i++) {
		if (spf[i] == i) {
			for (int j = i * i; j <= MAXA; j += i) {
				if (spf[j] == j) spf[j] = i;
			}
		}
	}
	int n; cin >> n;
	int s = 0;
	int ans = 0;
	vector<int> a(n);
    	for (int i = 0; i < n; i++) cin >> a[i];
    	long long tong = 0;
    	int mx = 0;
    	for (int x : a) {
        	int dem = 0;
        	while (x > 1) {
            		dem++;
            		x /= spf[x];
        	}
        	tong += dem;
        	mx = max(mx, dem);
    	}
    	cout << tong - mx;
	return 0;
}
