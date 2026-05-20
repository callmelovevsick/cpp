#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

const int N = 1E5+2;

int a[N];
int i, n, dem;
long long res;
int main(){
    fast();
    
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort (a+1, a+n+1);
    dem = 1; res = 0;
    a[n+1] = 1E9+1;
    for (int i = 2; i <= n+1; i++) {
        if (a[i] == a[i-1]) dem++;
            else if (dem > 1) {
                res += (long long)dem * (dem - 1) / 2;
                dem = 1;
            }
    }

    cout << res;
    return 0;
}