#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n, k, s, p, ans;
    cin >> k >> n >> s >> p;
    ans = ceil((ceil(n / s) * k) / p);
    // ans=(int)ans;
    // cout <<ans << endl;
    cout <<(int) ans << endl;
    return 0;
}