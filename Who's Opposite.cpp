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
    ll a,b,c,n,ans,t;
    cin>>t;
    cin.ignore();
    while(t--) {
        cin>>a>>b>>c;
        ans=abs(a-b);
        n=ans*2;
        if(c>n or a>n or b>n)
            cout<<-1<<endl;
        else {
            if(c+ans<=n)
                cout<<c+ans<<endl;
            else if(c-ans<=n and c-ans>0)
                cout<<c-ans<<endl;
            else
                cout<<-1<<endl;
        }
    }
    return 0;
}
