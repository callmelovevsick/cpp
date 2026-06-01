#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

long long tong(long long n) {
    long long s = 0;
    n = abs(n); 
    while (n) {
        s += n % 10;
        n /= 10;
    }
    return s;
}

int main() {
    fast();
    
    long long n; cin >> n;
    cout << tong(n);
    
    return 0;
}