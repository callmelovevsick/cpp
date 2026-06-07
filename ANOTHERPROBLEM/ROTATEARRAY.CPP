#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

const int MAXN = 10000+5;
int a[MAXN];

int main() {
    fast();
    
    int n, k; cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> a[i];
    k %= n; 
    for (int i = n-k; i < n; i++) cout << a[i] << " ";
    for (int i = 0; i < n-k; i++) { 
        cout << a[i]; 
        if (i < n-k-1) cout << " "; 
    }
    cout << "\n";
    return 0;
}