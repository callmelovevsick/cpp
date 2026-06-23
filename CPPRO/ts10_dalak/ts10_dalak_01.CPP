#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);
#define int long long

signed main() {
	fast();
	int a, b; cin >> a >> b;
	int s = 0;
	for (int i = a; i <= b; i++) { 
		if (i % 2 == 0) s += i;
	}
	cout << s;	
	return 0;
}
