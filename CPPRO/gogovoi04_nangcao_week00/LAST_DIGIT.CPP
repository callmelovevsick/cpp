#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

long long love(long long a, long long b, long long c) {
	long long s = 1 % c;
	for (int i = a; i <= b; i++) s = (s *(i % c)) % c;
	return s;
}

int main() {
	fast();
	long long a, b, c; cin >> a >> b >> c;
	cout << love(a, b, c);;
	return 0;
}
