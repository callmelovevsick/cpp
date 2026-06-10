#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
	fast();
	int t; cin >> t;
	while (t--) {
		long long a, b; cin >> a >> b;
		if (a*a > 3.14*(b*b)) cout << "square" << endl;
		else cout << "circle" << endl;
	}		

	return 0;
}
