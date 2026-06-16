#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
	fast();
	string s;
	getline(cin, s);
	long long k = 1;
	for (long long i = 1; i <= s.size(); i++) k *= i;
	cout << k;	
	
	return 0;
}
