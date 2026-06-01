#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();
    
    long long n; cin >> n;
    string t, sodu = "01"; 
    while (n > 0) {
        t = sodu[n % 2] + t; 
        n /= 2; 
    }
    cout << t;
    
    return 0;
}