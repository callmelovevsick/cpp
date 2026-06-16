#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
	fast();
	long long a, b, c; cin >> a >> b >> c;
	if (a + b <= c || a + c <= b || b + c <= a) {
        	cout << "NO";
        	return 0;
    	}
	if ((a*a)+(b*b) == (c*c) || (a*a)+(c*c) == (b*b) || (b*b)+(c*c) == (a*a)) cout << "YES";
	else cout << "NO"; 	
	
	return 0;
}
