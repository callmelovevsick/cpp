#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int main() {
    fast();
    
    int nums[3];
    cin >> nums[0] >> nums[1] >> nums[2];
    sort(nums, nums + 3);
    cout << nums[0] << " " << nums[1] << " " << nums[2];
    
    return 0;
}