#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();
    int N; cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
    cin >> A[i];
    }
    long long answer = 0;
    vector<pair<int, long long>> prev, cur;
    for (int x : A) {
        cur.clear();
        cur.push_back({x, 1});
        for (auto [g, cnt] : prev) {
            int ng = gcd(g, x);
            if (!cur.empty() && cur.back().first == ng) {
                cur.back().second += cnt;
            } else {
                cur.push_back({ng, cnt});
            }
        }
        for (auto [g, cnt] : cur) {
            if (g > 1) {
                answer += cnt;
            }
        }
        prev.swap(cur);
    }
    cout << answer << '\n';
    return 0;
}
