#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();
    
    long long n; cin >> n;
    for(int i = n - (n % 2); i > 0; i -= 2) {
        cout << i << " ";
    }
    
    return 0;
}