#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
	fast();
	int n; cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= 2 * i - 1; j++) {
			cout << j;
			if (j < 2 * i - 1) cout << " ";
		}
		cout << endl;
	}
	return 0;
}
