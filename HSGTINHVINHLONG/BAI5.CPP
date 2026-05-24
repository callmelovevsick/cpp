#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int even(int n) {
    return n % 2 == 0;
}

int odd(int n) {
    return n % 2 != 0;
}

const int N = 1e5 + 5;
bool is_prime[N];
void sang(int n) {
    fill(is_prime, is_prime+n+1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; (long long)i * i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

bool check_ed(int n) {
    string tmp = to_string(n);
    int dem = 0, dem1 = 0;
    for (char c : tmp) {
        if (even((int)c)) dem++;
         else if (odd((int)c)) dem1++;
    }
    if (dem != dem1) return true;
    return false;
}

int main() {
    fast();
    sang(N-1);
    int n; cin >> n;
    vector<int> a(n);
    int ans = 0;
    for (int &x : a) cin >> x;
    for (int x : a) {
        if (is_prime[x] && check_ed(x)) ans++;;
    }
    cout << ans;
    
    return 0;
}