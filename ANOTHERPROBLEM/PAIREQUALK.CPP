#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();
    
    int n; long long K; cin >> n >> K;
    map<long long, long long> cnt;
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        long long x; cin >> x;
        ans += cnt[K - x];
        cnt[x]++;
    }
    cout << ans << "\n";
    
    return 0;
}