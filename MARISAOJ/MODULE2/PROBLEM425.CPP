#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();
    
    int n; cin >> n;
    int ans = 0;
    for(int i = 1 ; i <= n ; i++)
        for(int j = i + 1 ; j <= n ; j++)
            for(int k = j + 1 ; k <= n ; k++)
                for(int h = k + 1 ; h <= n ; h++)
                    if(i + j + k + h == n) 
                        ans++;
    cout << ans;
    
    return 0;
}