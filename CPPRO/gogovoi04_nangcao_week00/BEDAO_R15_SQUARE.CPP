#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
	fast();
	int n; cin >> n;
	if (n == 1) {
		cout << 1;
		return 0;
	}
	for (int i = 1; i < n; i++) {
		cout << i << " ";
	}
	long long last_digit = (n*n+n)/2;
	cout << last_digit;
	return 0;
}
