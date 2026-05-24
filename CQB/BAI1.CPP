#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();
    
    int n; cin >> n;
    long long sum = 0;
    for (int i = 7; i < n; i += 7) {
        sum += i;
    }
    cout << sum;
    
    return 0;
}