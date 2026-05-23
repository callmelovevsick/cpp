#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();
    
    int a[4];
    for (int i = 0; i < 4; i++) cin >> a[i];
    int total = a[0] + a[1] + a[2] + a[3];

    if (total % 2 != 0) { cout << "KHONG"; return 0; }
    int half = total / 2;

    for (int mask = 0; mask < 16; mask++) {
        int s = 0;
        for (int i = 0; i < 4; i++)
            if (mask >> i & 1) s += a[i];
        if (s == half) { cout << "CO"; return 0; }
    }

    cout << "KHONG";
    return 0;
}