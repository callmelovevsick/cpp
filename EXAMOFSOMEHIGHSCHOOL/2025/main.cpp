#include <bits/stdc++.h>
using namespace std;

bool check(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
	freopen("SODB.INP", "r", stdin);
	freopen("SODB.OUT", "w", stdout);
	int n; cin >> n;
	while (n--) {
		int dem = 0;
		int a, b; cin >> a >> b;
		for (int i = a; i <= b; i++) {
			if (check(i)) dem++;
		}
		cout << dem << endl;
	}	
	return 0;
}
