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
    ll l,n,i;
    cin>>n>>l;
    double a[n];
    for(i=0; i<n; i++) {
        cin>>a[i];
    }
    sort(a,a+n);
    double ans=0,dis,mx;
    ans=max(ans,a[0]);
    ans=max(ans,l-a[n-1]);
    for(i=0; i<n-1; i++) {
        dis=a[i+1]-a[i];
        dis/=2.00000000;
        ans=max(dis,ans);
    }
    printf("%.9lf\n",ans);
//    cout<<ans<<endl;
    return 0;
}
