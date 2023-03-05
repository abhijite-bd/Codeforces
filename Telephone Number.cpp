#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<queue>
#include<set>
#define   ll long long int
#define   gcd(a,b)   __gcd(a,b)
#define   lcm(a,b)   (a*b)/gcd(a,b)
#define   ss " "
#define   fast()   ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define   max3(a,b,c) max(max(a,b),c)
#define   min3(a,b,c) min(min(a,b),c)
using namespace std;
int main()
{
    fast();
    int t;
    cin >> t;
    while(t--) {
        int n;
        string a;
        bool flag = false;
        cin >> n ;
        cin>> a;
        for(int i = 0; i <= n - 11; i++) {
            if(a[i] == '8') flag = true;
        }
        if(flag && a.size() >= 11) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
