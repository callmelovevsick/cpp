#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();
    
    int n; long long p; cin >> n >> p;

    vector<long long> a(n + 1);
    vector<long long> S(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        S[i] = S[i - 1] + a[i]; 
    }
    vector<long long> MinS(n + 2, 2e18); 
    
    for (int j = n; j >= 0; j--) {
        MinS[j] = min(S[j], MinS[j + 1]);
    }
    int ans = 0; 
    for (int i = 0; i < n; i++) {
        long long target = S[i] + p;
        int low = i + 1, high = n, best_j = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (MinS[mid] <= target) {
                best_j = mid; 
                low = mid + 1;
            } else {
                high = mid - 1; 
            }
        }
        if (best_j != -1) {
            ans = max(ans, best_j - i);
        }
    }
    cout << ans << "\n";
    
    return 0;
}