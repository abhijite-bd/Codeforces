#include<bits/stdc++.h>
#include<math.h>
#include<algorithm>
#include<string>
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
    ll t,n,i,j;
    cin>>t;
    while(t--) {
        n=7;
        ll a[n];
        for(i=0; i<n; i++) {
            cin>>a[i];
        }
        sort(a,a+n);
        cout<<a[0]<<ss<<a[1]<<ss<<a[6]-a[0]-a[1]<<endl;
    }
    return 0;
}
