#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();
    
    ll n, k; cin >> n >> k;
    map<ll, ll, greater<ll>> mp;
    mp[n] = 1;
    while (k > 0) {
        auto it = mp.begin();
        ll hi = it->first, cnt = it->second;
        mp.erase(it);
        if (k < cnt) {
            cout << hi << " " << (cnt - k);
            return 0;
        }
        k -= cnt;
        ll lo  = hi / 2;   
        ll hi2 = hi - lo;   
        mp[lo]  += cnt;
        mp[hi2] += cnt;     
    }

    cout << mp.begin()->first << " " << mp.begin()->second;
    
    return 0;
}