#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int sum(int n) {
    int s = 0;
    while (n > 0) {
        s += n % 10;
        n /= 10;
    }
    return s;
}

int main() {
    fast();
    
    long long n; cin >> n;
    long long price = 0;
    if (n <= 10) {
        price = n * 20000;
    } 
    else if (n <= 50) {
        price = (10 * 20000) + ((n - 10) * 18000);
    } 
    else {
        price = (10 * 20000) + (40 * 18000) + ((n - 50) * 15000);
    }
    cout << price << "\n";
    
    return 0;
}