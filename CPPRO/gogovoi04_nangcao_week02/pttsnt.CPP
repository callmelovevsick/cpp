#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);
#define int long long

int dem(int n) {
	int ans = 0;
	for (int i = 1; i * i <= n; i++) {
                if (n % i == 0) {
                        ans++;
                        if (i != n / i) ans++;
                }
        }
	return ans;
}

signed main() {
	fast();
	int n; cin >> n;
	int tmp = n;	
	for (int i = 2; i * i <= n; i++) {
        	while (n % i == 0) {
            		cout << i;
            		n /= i;
            		if (n > 1) cout << "*";
        	}
    	}
    	if (n > 1) cout << n;
	cout << endl;
	cout << dem(tmp);
	return 0;
}
