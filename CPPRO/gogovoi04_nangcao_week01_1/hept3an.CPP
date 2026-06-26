#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);
#define int long long

int det(int a1,int b1,int c1,
              int a2,int b2,int c2,
              int a3,int b3,int c3)
{
    return a1*(b2*c3-b3*c2)
         - b1*(a2*c3-a3*c2)
         + c1*(a2*b3-a3*b2);
}

signed main() {
	fast();
	int n, m, k; cin >> n >> m >> k;
	int D = det(
        1,1,1,
        3,5,7,
        1,1,-1
    );
    int Dx = det(
        n,1,1,
        m,5,7,
        k,1,-1
    );
    int Dy = det(
        1,n,1,
        3,m,7,
        1,k,-1
    );
    int Dz = det(
        1,1,n,
        3,5,m,
        1,1,k
    );
    if (D == 0) {
        cout << -1;
        return 0;
    }
    if (Dx % D || Dy % D || Dz % D) {
        cout << -1;
        return 0;
    }
    int x = Dx / D;
    int y = Dy / D;
    int z = Dz / D;
	cout << x << " " << y << " " << z; 	
	return 0;
}
