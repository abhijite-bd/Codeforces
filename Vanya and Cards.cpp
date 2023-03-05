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
    int n,x,a,i,ans=0;
    cin>>n>>x;
    for(i=0; i<n; i++) {
        cin>>a;
        ans+=a;
    }
    if(ans==0)
        cout<<0<<endl;
    else {
        ans=abs(ans);
        int r=ans%x;
        r==0?cout<<ans/x<<endl:cout<<ans/x+1<<endl;
    }

    return 0;
}
