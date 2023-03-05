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
    int x1,y1,x2,y2,z1,z2,t,ans;
    cin>>t;
    while(t--) {
        cin>>x1>>x2;
        cin>>y1>>y2;
        cin>>z1>>z2;

        ans=0;
        ans+=abs(x1-y1);
        ans+=abs(y2-x2);

        if(x2==y2 and y2==z2) {
            if(z1>=min(x1,y1) && z1<=max(x1,y1) )
                ans+=2;
        } else if( x1==y1 and y1==z1) {
            if(z2>=min(x2,y2) && z2<=max(x2,y2) )
                ans+=2;
        }
        cout<<ans<<endl;
    }
    return 0;
}
