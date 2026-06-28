#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);
#define int long long

const int N = 1e6+7;
int d[N];

void love(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j += i) {
			d[j]++;
		}
	}
}

bool check(int n) {
	if (d[n] == 4) return true;
	else return false;
}

signed main() {
	fast();
	int n; cin >> n;
	int ans = 0;
	love(n);
	for (int i = 1; i <= n; i++) {
		if (check(i) && n % i == 0) ans++;
	}
	cout << ans;	
	return 0;
}
