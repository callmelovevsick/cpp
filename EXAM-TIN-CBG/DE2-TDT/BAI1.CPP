#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();

    string S, T;
    cin >> S >> T;
    map<char, int> cntS, cntT;
    for (char c : S) cntS[c]++;
    for (char c : T) cntT[c]++;
    int Q;
    cin >> Q;
    while (Q--) {
        char ch;
        cin >> ch;
        int s = cntS[ch], t = cntT[ch];
        if (s > t) cout << 1 << "\n";
        else if (t > s) cout << 2 << "\n";
        else cout << 3 << "\n";
    }
    
    return 0;
}