#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);
#define int long long

signed main() {
	fast();
	string s; getline(cin, s);
	int ans1 = 0;
	string tmp = "";
	string maxs = "";
	for (int i = 0; i < s.size(); i++) {
		if (isdigit(s[i])) ans1++;
		if (isalpha(s[i]) && islower(s[i])) {
			tmp += s[i];
		} else {
			if (tmp.size() > maxs.size()) {
				maxs = tmp;
			}
			tmp = "";
		}
	}
	if (tmp.size() > maxs.size()) maxs = tmp;
	s.erase(remove(s.begin(), s.end(), ' '), s.end());
	cout << ans1 << endl << s << endl << maxs;
	return 0;
}
