#include <bits/stdc++.h>
using namespace std;

#define fast() ios::sync_with_stdio(false); cin.tie(0);
#define in(file) freopen(file ".inp", "r", stdin);
#define out(file) freopen(file ".out", "w", stdout);

int n;
string curString;

void genString(int pos)
{
    if (pos > n)
    {
        cout << curString << "\n";
        return;
    }
    for (char i = '0'; i <= '1'; i ++)
    {
        curString.push_back(i);  
        genString(pos + 1);
        curString.pop_back();    
    }
}

int main()
{
    cin >> n;
    curString = "";
    genString(1);

    return 0;
}