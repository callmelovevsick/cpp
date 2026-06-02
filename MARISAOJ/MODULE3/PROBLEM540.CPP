#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();
    
    int n; cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    int max_diff = 0;
    for (int i = 0; i < n - 1; i++) {
        int current_diff = abs(A[i] - A[i + 1]);
        max_diff = max(max_diff, current_diff);
    }
    cout << max_diff;
    
    return 0;
}