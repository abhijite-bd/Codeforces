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
    int a,b,x,y,t,ans,mx1,mx2,mx3,mx4;
    cin>>t;
    while(t--) {
        cin>>a>>b>>x>>y;
        mx1=x*b;
        mx2=(a-x-1)*b;
        mx3=a*y;
        mx4=a*(b-y-1);
        ans=max3(mx1,mx2,mx3);
        ans=max(ans,mx4);
        cout<<ans<<endl;
    }
    return 0;
}
