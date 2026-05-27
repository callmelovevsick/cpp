#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

const int MAX = 1000005;

int d[MAX];
bool is_prime[MAX];
int pref[MAX];

void love_dep_trai() {
    for (int i = 1; i < MAX; i++) {
        for (int j = i; j < MAX; j += i) {
            d[j]++;
        }
    }
    fill(is_prime, is_prime + MAX, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i < MAX; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j < MAX; j += i) {
                is_prime[j] = false;
            }
        }
    }
    pref[0] = 0;
    for (int i = 1; i < MAX; i++) {
        int is_true = is_prime[d[i]] ? 1 : 0;
        pref[i] = pref[i - 1] + is_true;
    }
}


int main() {
    fast();
    
    love_dep_trai();
    int t; cin >> t;
    long long s = 0;
    while (t--) {
        int l, r; cin >> l >> r;
        s += pref[r] - pref[l - 1];
    }
    cout << s;
    
    return 0;
}