#include<iostream>
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
    int n,m,ans=0,row,cell,r,t;
    cin>>t;
    while(t--) {
        cin>>n>>m;
        row=n/3;
        r=n%3;
        ans=row*m;
//        cout<<ans<<endl;
        if(r==1) {
            if(m%3==0)
                ans+=m/3;
            else
                ans+=m/3+1;
        } else if(r==2) {
            if(m%3==0)
                ans+=2*(m/3);
            else if(m%3==2)
                ans+=2*(m/3)+2*1;
            else
                ans+=2*(m/3)+1;

        }
        cout<<ans<<endl;
    }
    return 0;
}
