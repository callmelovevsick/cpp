#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();
    
    char c; cin >> c;
    if (isupper(c)) {
        cout << tolower(c);
    } else {
        cout << toupper(c);
    }
    
    return 0;
}