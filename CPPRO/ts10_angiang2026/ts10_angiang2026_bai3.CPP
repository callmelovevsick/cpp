#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);
#define int long long

int sum(string n) {
	int tong = 0;
	for (char c : n) tong += c - '0';
	return tong;
}

signed main() {
	fast();
	string s; getline(cin, s);
	string tmp = "";
	string maxs = "";
	for (int i = 0; i < s.size(); i++) {
		if (isdigit(s[i])) {
			tmp += s[i];
		} else {
			if (tmp.size() > maxs.size()) {
				maxs = tmp;
			}
			tmp = "";
		}
	}	
	if (tmp.size() > maxs.size()) maxs = tmp;
	cout << maxs << "\n" << sum(maxs);
	return 0;
}
