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
    ll a[3],d,mx,mn,ans=0;
    cin>>a[0]>>a[1]>>a[2]>>d;
    sort(a,a+3);
    if((a[1]-a[0])<d)
        ans+=(-a[1]+a[0])+d;
    if((a[2]-a[1])<d)
        ans+=(-a[2]+a[1])+d;
    cout<<ans<<endl;
    return 0;
}
