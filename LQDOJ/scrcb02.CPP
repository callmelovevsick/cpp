#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

long long count(long long n) {
	if (n < 0) return 0;
	return n / 3+1;
}

int main() {
	fast();

	long long a, b; cin >> a >> b;
	if (a > b) swap(a, b);
	cout << (b / 3) - ((a - 1) / 3);		

        return 0;
}
