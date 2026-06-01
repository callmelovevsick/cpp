#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int search(int k, int d, int c) {
    while (d <= c) {
        int g = (d+c)/2;
        if (a[g] == k) return g;
        if (a[k] > k) c = g - 1;
        else d = g + 1;
    }
    return -1;
}

int main() {
    fast();
    
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for (int i = 1; i <= n; i++) cin >> a[i];
    cout << search(k, 1, n);
    
    return 0;
}