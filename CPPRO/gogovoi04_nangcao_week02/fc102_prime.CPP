#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);
#define int long long

vector<bool> prime;
vector<int> sum;
vector<int> cnt;

void sang(int n) {
	prime.resize(n + 1);
	sum.resize(n + 1);
	cnt.resize(n + 1);
	fill(prime.begin(), prime.end(), true);
	prime[0] = prime[1] = false;
	for (int i = 2; i * i <= n; i++) {
		if (prime[i]) {
			for (int j = i * i; j <= n; j += i) {
				prime[j] = false;
			}
		}
	}
	sum[0] = 0;
	cnt[0] = 0;
	for (int i = 1; i <= n; i++) {
		sum[i] = sum[i-1];
		cnt[i] = cnt[i-1];
		if (prime[i]) {
			sum[i] += i;
			cnt[i]++;
		}
	}
}

signed main() {
	fast();
	int n; cin >> n;
	vector<int> a(n), b(n);
	int maxb = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> b[i];
		maxb = max(maxb, b[i]);
	}
	sang(maxb);
	for (int i = 0; i < n; i++) {
		int s = sum[b[i]] - sum[a[i] - 1];
		int dem = cnt[b[i]] - cnt[a[i] - 1];
		if (dem == 0) cout << "0.00\n";
		else cout << fixed << setprecision(2) << (double)s/dem << "\n";
	}		
	return 0;
}
