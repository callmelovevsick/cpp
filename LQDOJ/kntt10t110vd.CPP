#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();
    
    for (int i = 1; i <= 100; ++i) {
        cout << i << " ";
        if (i % 10 == 0) {
            cout << endl;
        }
    }
    
    return 0;
}