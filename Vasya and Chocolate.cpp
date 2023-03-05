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
    ll a,b,c,s,t,ans;
    cin>>t;
    while(t--) {
        cin>>s>>a>>b>>c;
        ll d=s/c;
        ll x=d/a;

        ans=(x*a)+(x*b);
        ans+=(d%a);
        cout<<ans<<endl;

    }
    return 0;
}
