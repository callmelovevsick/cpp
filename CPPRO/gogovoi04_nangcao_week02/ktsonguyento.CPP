#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);
#define int long long

bool nt(int n) {
	if (n < 2) return false;
	if (n == 2) return true;
	if (n % 2 == 0) return false;
    	for (int i = 3; i * i <= n; i += 2)
        	if (n % i == 0) return false;
    	return true;
}

signed main() {
	fast();
	int n; cin >> n;
	if (nt(n)) cout << "YES";
	else cout << "NO";	
	return 0;
}
