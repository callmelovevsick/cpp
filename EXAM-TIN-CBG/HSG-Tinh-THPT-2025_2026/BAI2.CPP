#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();
    // in("XOASO");
    // out("XOASO");

    int n, k;
    if (!(cin >> n >> k)) return 0;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int L = n - k; 
    int window_size = L - 1; 
    vector<long long> d(n - 1);
    for (int i = 0; i < n - 1; i++) {
        d[i] = a[i + 1] - a[i];
    }
    deque<int> dq;
    vector<long long> min_d(n - 1); 
    for (int i = 0; i < n - 1; i++) {
        if (!dq.empty() && dq.front() <= i - window_size) {
            dq.pop_front();
        }
        while (!dq.empty() && d[dq.back()] >= d[i]) {
            dq.pop_back();
        }
        dq.push_back(i);
        if (i >= window_size - 1) {
            min_d[i - window_size + 1] = d[dq.front()];
        }
    }
    long long ans = -1;
    for (int i = 0; i <= n - L; i++) {
        long long M = a[i + L - 1] - a[i]; 
        long long m = min_d[i];          
        long long current_val = abs(M) + abs(m); 
        if (ans == -1 || current_val < ans) {
            ans = current_val;
        }
    }
    cout << ans;

    return 0;
}