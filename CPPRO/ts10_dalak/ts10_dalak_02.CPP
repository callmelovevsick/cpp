#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);
#define int long long

signed main() {
	fast();
	string s; cin >> s;
	int freq[26] = {};
	for (char c : s) if (islower(c)) freq[c - 'a']++;	
	for (int i = 0; i < 26; i++) {
		if (freq[i] != 0) cout << freq[i] << " \n"[i == 25];
		else return 0;
	}
	return 0;
}
