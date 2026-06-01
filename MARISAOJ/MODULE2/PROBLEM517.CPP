#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

long long dao(long long n) {
    string tmp = to_string(n);
    reverse(tmp.begin(), tmp.end());
    return stoll(tmp);
}

int main() {
    fast();
    
    long long a, b; cin >> a >> b;
    cout << dao(a+b);
    
    return 0;
}