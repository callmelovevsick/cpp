#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);
#define int long long

const int MAX = 1e5+7;
int mdiv[MAX + 1];
int pref[MAX + 1];

void love() {
	for (int i = 1; i <= MAX; ++i) {
        	for (int j = 2 * i; j <= MAX; j += i) {
            		mdiv[j] += i;
        	}
    	}
	for (int i = 1; i <= MAX; ++i) {
        	pref[i] = pref[i - 1];
        	if (mdiv[i] > i) pref[i]++;
	}
}

signed main() {
	fast();
	love();
	int l, r; cin >> l >> r;
	cout << pref[r] - pref[l-1];
	return 0;
}
