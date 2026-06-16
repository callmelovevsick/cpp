#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

bool cp(int n) {
	if (n == 1) return true;
	int x = sqrt(n);
	return x*x == n;
}

int main() {
	fast();
	int n; cin >> n;
	if (cp(n)) cout << "YES";
	else cout << "NO";
	
	return 0;
}
