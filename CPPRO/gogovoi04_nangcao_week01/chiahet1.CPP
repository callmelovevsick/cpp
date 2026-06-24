#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);
#define int long long

int sum(string s) {
	int tong = 0;
	for (int i = 0; i < s.size(); i++) tong += s[i] - '0';
	return tong;
}

bool check[20];

signed main() {
	fast();
	string s; cin >> s;
	int n = s.size();
	
	if ((s[n - 1] - '0') % 2 == 0) check[2] = 1;
	
	if (sum(s) % 3 == 0) check[3] = 1;
	
	if (sum(s) % 9 == 0) check[9] = 1;
		
	int tmp = s[n - 1] - '0';
	
	if (n >= 2) tmp = (s[n - 2] - '0') * 10 + tmp;	
	
	if (tmp % 4 == 0) check[4] = 1;
		
	if (s[n - 1] - '0' == 5 || s[n - 1] == 0) check[5] = 1;
	
	if (s[n - 1] - '0' == 0) check[10] = 1;
	
	if (check[2] && check[3]) check[6] = 1;
	
	if (n >= 3) tmp = (s[n - 3] - '0') * 100  + tmp;	
	
	if (tmp % 8 == 0) check[8] = 1;
	
	int odd, even = 0;
	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) odd += s[i] - '0';
		else even += s[i] - '0';
	}
	if (abs((odd - even)) % 11 == 0) check[11] = 1;
	for (int i = 2; i <= 11; i++) {
		if (i == 7) continue;
		if (check[i] == 1) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
