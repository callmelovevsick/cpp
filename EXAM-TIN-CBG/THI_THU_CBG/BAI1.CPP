#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

long long  power(long long a, int n){
    if (n == 0) return 1;
    long long t = power(a, n/2);
    if (n%2==0) return t*t;
        else return t*t*a;
}

int main() {
    fast();
    long long a, b, c; cin >> a >> b >> c;
    cout << power(a, b) % c;
    
    return 0;
}