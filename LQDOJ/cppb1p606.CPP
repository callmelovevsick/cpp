#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

string solve(string s) {
	return reverse(s.begin(), s.end());
}

int main() {
	string s; getline(cin, s);
	cout << s << solve(s);

	return 0;
}
