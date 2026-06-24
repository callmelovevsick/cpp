#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);
#define int long long

string check(int a, int b, int c) {
	if (a + b <= c || a + c <= b || b + c <= a) return "Khong phai tam giac";
    	int mx = max(a, max(b, c));
    	int sumsq = a * a + b * b + c * c - mx * mx;
    	int mxsq = mx * mx;
    	if (mxsq == sumsq) return "Vuong";
    	else if (mxsq < sumsq) return "Nhon";
    	else return "Bu";
}

signed main() {
	fast();
	int a, b, c; cin >> a >> b >> c;
	cout << check(a, b, c);	
	return 0;
}
