#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();
    
    string s; cin >> s;
    vector<int> is_digit;
    string tmp = "";

    for (char c : s) {
        if (isdigit(c)) {
            tmp += c;
        } else {
            if (!tmp.empty()) {
                is_digit.push_back(stoi(tmp));
                tmp = "";
            }
        }
    }
    if (!tmp.empty()) {
        is_digit.push_back(stoi(tmp));
    }

    sort(is_digit.begin(), is_digit.end());
    for (int x : is_digit) {
        cout << x << " ";
    }
    
    return 0;
}