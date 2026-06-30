#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);
#define int long long

bool check(int n) {
	if (n <= 1) return false;
	if (n <= 3) return true;
	if (n % 2 == 0 || n % 3 == 0) return false;
	for (int i = 5; i * i <= n; i += 6) {
		if (n % i == 0 || n % (i + 2) == 0) return false;
	}
	return true;
}

signed main() {
	fast();
	int n; cin >> n;
	int s = 0; int dem = 0;
	while (n--) {
		int a, b; cin >> a >> b;
		for (int i = a; i <= b; i++) {
			if (check(i)) {
				s += i;
				dem++;
			}
		}
		cout << fixed << setprecision(2) << (double)s/dem << "\n";
		s = 0;
		dem = 0;
	}			
	return 0;
}
