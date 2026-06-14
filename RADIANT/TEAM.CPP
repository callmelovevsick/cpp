#include<bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();
    in("TEAM");
    out("TEAM");

    int n, k; cin >> n >> k;
    vector<long long> count(k, 0);
    long long ans = 0;
    for (int i = 0; i < n; ++i) {
        long long a;
        cin >> a;
        int r = a % k;
        int target = (k - r) % k;
        ans += count[target];
        count[r]++;
    }
    cout << ans << "\n";
    return 0;
}
