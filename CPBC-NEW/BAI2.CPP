#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();

    string T;
    char ch;
    cin >> T >> ch;
    int L = T.size();
    vector<int> cnt(L + 1, 0);
    for (int i = 0; i < L; i++)
        cnt[i + 1] = cnt[i] + (T[i] == ch ? 1 : 0);
    int lo = 0, hi = L, n = -1;
    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        int f = cnt[mid] - 2 * mid + L;
        if (f == 0) { n = mid; break; }
        else if (f > 0) lo = mid + 1; 
        else hi = mid - 1; 
    }
    if (n <= 0) { cout << -1; return 0; }
    int j = n; 
    for (int i = 0; i < n; i++) {
        if (T[i] == ch) continue;    
        if (j >= L || T[i] != T[j]) { 
            cout << -1;
            return 0;
        }
        j++;
    }
    if (j != L) { cout << -1; return 0; }
    cout << T.substr(0, n);
    return 0;
}