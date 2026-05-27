#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

const int MAXN = 1e6+5;
vector<bool> prime(MAXN+1, true);
void sang() {
    prime[0] = prime[1] = false;
    for (long long i = 2; i*i < MAXN; i++) {
        if (prime[i]) {
            for (long long j = i*i; j < MAXN; j += i) {
                prime[j] = false;
            }
        }
    }
}

int main() {
    fast();
    sang();

    int n; cin >> n;
    while (n--) {
        long long a;
        cin >> a;
        long long x = sqrtl(a);
        if (x * x == a && prime[x])
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    
    return 0;
}