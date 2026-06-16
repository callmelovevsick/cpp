#include <iostream>
using namespace std;
#define int long long
signed main() {
    int n;
    cin>>n;
    int a[n], s = 1;
    int zr = 0,z = zr;
    int minn = -9223372036854775807ll;
    static const int mod = 1e9+7;
    for(int i = 0 ; i < n ; i++) {
        cin>>a[i];
        s =(s * a[i])%mod;
        if(a[i] == 0) zr++;
        if(a[i] < 0) z++;
        if(a[i] < 0) minn = max(minn,a[i]);
    }
    bool Del = 0;
    if(zr > 1) {
        cout<<0;
        return 0;
    }
    if(z%2 == 0 && zr == 0) {
        cout<<s%mod;
        return 0;
    } else if(zr == 1 && z%2 == 0) {
        s = 1;
        for(int i = 0 ; i < n ; i++) {
            if(!a[i]) continue;
            s =(s * a[i])%mod;
        }
        cout<<s%mod;
    } else if(zr == 0 && z%2 != 0) {
        s = 1;
        for(int i = 0 ; i < n ; i++) {
            if(a[i] == minn&&Del == 0) {Del = 1;continue;}
            s =(s * a[i])%mod;
        }
        cout<<s%mod;
    }else cout<<0;
    return 0;
}
