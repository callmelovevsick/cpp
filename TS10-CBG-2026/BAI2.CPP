#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

bool check(long long max_sum, const vector<long long>& a, int n, int k) {
    int current_groups = 1;
    long long current_sum = 0;

    for (int i = 0; i < n; ++i) {
        if (a[i] > max_sum) return false;
        if (current_sum + a[i] > max_sum) {
            current_groups++;
            current_sum = a[i];
            if (current_groups > k) return false;
        } else {
            current_sum += a[i];
        }
    }
    return true;
}

int main() {
    fast();
    
    int n, k; cin >> n >> k;
    vector<long long> a(n);
    long long max_val = 0;
    long long sum_val = 0;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        max_val = max(max_val, a[i]);
        sum_val += a[i];
    }
    long long low = max_val;
    long long high = sum_val;
    long long ans = high;
    while (low <= high) {
        long long mid = low + (high - low) / 2;
        if (check(mid, a, n, k)) {
            ans = mid;    
            high = mid - 1;
        } else {
            low = mid + 1;   
        }
    }
    cout << ans;
    
    return 0;
}