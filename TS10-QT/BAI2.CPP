#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();
    
    string s; getline(cin, s);
    stringstream ss(s);
    string word;
    map<string, int> freq;
    int max_freq = 0;
    while (ss >> word) {
        freq[word]++;
        max_freq = max(max_freq, freq[word]);
    }
    cout << max_freq;
    
    return 0;
}