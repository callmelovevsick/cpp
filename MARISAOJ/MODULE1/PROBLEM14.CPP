#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();
    
    char a, b; cin >> a >> b;
    a = tolower(a);
    b = tolower(b);
    if((int(b - 1)) == (int)a){
        cout << 0;
    } else {
        cout << (int)(b - 1) - (int)(a);
    }
    
    return 0;
}