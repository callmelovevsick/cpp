#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);
#define int long long

int gcd(int a, int b){
    if(b == 0) return abs(a);
    return gcd(b, a % b);
}

void rutgon(int &tu, int &mau){
    if(tu == 0){
        mau = 1;
        return;
    }

    int g = gcd(abs(tu), abs(mau));

    tu /= g;
    mau /= g;

    if(mau < 0){
        tu = -tu;
        mau = -mau;
    }
}

signed main(){
    fast();

    int n;
    cin >> n;

    int tu[1005], mau[1005];
    int cnt = 0;

    for(int i = 1; i <= n; i++){
        int a, b;
        cin >> a >> b;

        if(b == 0) continue;

        rutgon(a, b);

        tu[++cnt] = a;
        mau[cnt] = b;
    }

    for(int i = 1; i <= cnt; i++){
        for(int j = i + 1; j <= cnt; j++){
            if(tu[i] * mau[j] > tu[j] * mau[i]){
                swap(tu[i], tu[j]);
                swap(mau[i], mau[j]);
            }
        }
    }

    for(int i = 1; i <= cnt; i++){
        cout << tu[i] << "/" << mau[i] << '\n';
    }

    if(cnt >= 2){
        int t = tu[1] * mau[2] + tu[2] * mau[1];
        int m = mau[1] * mau[2];
        rutgon(t, m);
        cout << t << "/" << m << '\n';
    }

    if(cnt >= 3){
        int t = tu[3] * mau[1] - tu[1] * mau[3];
        int m = mau[1] * mau[3];
        rutgon(t, m);
        cout << t << "/" << m << '\n';
    }

    if(cnt >= 4){
        int t = tu[1] * tu[4];
        int m = mau[1] * mau[4];
        rutgon(t, m);
        cout << t << "/" << m << '\n';
    }

    if(cnt >= 5 && tu[1] != 0){
        int t = tu[5] * mau[1];
        int m = mau[5] * tu[1];
        rutgon(t, m);
        cout << t << "/" << m << '\n';
    }

    return 0;
}