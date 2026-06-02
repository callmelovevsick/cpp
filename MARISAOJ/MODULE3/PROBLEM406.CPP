#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();
    
    int n; cin >> n;
    int x;
    int mx = -1;
    int pos;
    for(int i = 1 ; i <= n ; i++) {
        cin >> x;
        if(x > mx) {
            mx = x;
            pos = i;
        }
    }
    cout<< mx << " " << pos;
    
    return 0;
}