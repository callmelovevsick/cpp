#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

const int N = 1e6 + 5;
int d[N];     
int prefix[N];  

void sieve(int n) {
    for (int i = 1; i <= n; i++)
        for (int j = i; j <= n; j += i)
            d[j]++;

    for (int i = 1; i <= n; i++)
        prefix[i] = prefix[i-1] + (d[i] == 4 ? 1 : 0);
}

int main() {
    fast();

    sieve(N - 1);

    int q;
    cin >> q;

    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << prefix[r] - prefix[l-1] << "\n";
    }

    return 0;
}