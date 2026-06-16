#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

string check(int a, int b, int c) {
	if (a <= 0 || b <= 0 || c <= 0 || a + b + c != 180) return "0";	
	else if (a == 90 || b == 90 || c == 90) return "VUONG";
	else if (a == 60 && b == 60 && c == 60) return "DEU";
	else if (a == b || a == c || b == c) return "CAN";
	else return "THUONG";
}
int main() {
	fast();
	int a, b, c; cin >> a >> b >> c;
	cout << check(a, b, c);	
	return 0;
} 
