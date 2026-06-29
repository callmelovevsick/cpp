#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);
#define int long long

int gcd(int a, int b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}

signed main() {
	fast();
	int a, b; cin >> a >> b;
	int g = gcd(a, b);
	vector<int> v;
	for (int i = 1; i * i <= g; i++) {
        	if (g % i == 0) {
            		cout << i << " ";
            		if (i != g / i) v.push_back(g / i);
        	}
    	}	
	sort(v.begin(), v.end());
	for (auto &x : v) cout << x << " ";
	return 0;
}
