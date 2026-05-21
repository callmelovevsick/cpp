#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int cnt[1000005];

int main() {
    fast();
    
    int n, m; cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int l = 0;
    int another= 0;
    int ans = n + 1; 
    for (int r = 0; r < n; r++) {
        if (cnt[a[r]] == 0) {
            another++;
        }
        cnt[a[r]]++;
        while (another== m) {
            ans = min(ans, r - l + 1);

            cnt[a[l]]--;
            if (cnt[a[l]] == 0) {
                another--; 
            }
            l++;
        }
    }

    cout << ans;
    
    return 0;
}