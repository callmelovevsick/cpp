#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
	fast();
	in("DOIGIAY");
	out("DOIGIAY");
	long long n; cin >> n;
	long long d, h, m, s;
	d = n / 86400;
	n %= 86400;
	h = n / 3600;
	n %= 3600;
	m = n / 60;
	s = n % 60;
	cout << d << endl << h << endl << m << endl << s;
	return 0;
}
