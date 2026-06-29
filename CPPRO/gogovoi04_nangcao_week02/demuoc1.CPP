#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);
#define int long long

const int N = 1e6+5;
int d[N];

void love(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j += i) {
			d[j]++;
		}
	}
}

signed main() {
	fast();
	int t; cin >> t;	
	love(1000000)
	while (t--) {
		int n; cin >> n;
		cout << d[n] << "\n";
	}	
	return 0;
}
