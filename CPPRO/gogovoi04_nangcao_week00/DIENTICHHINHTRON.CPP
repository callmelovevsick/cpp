#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
	fast();
	int n; cin >> n;
	double s = (n*n)*3.14;
	cout << fixed << setprecision(2) << s;
	return 0;
}
