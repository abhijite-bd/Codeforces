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
    ll t,n,k,ans;
    cin>>t;
    while(t--) {
        cin>>n>>k;
        if(k<n)
            cout<<k<<endl;
        else {
            ll time=k/(n-1);
            ans=time*n+k%(n-1);
            if(k%(n-1)==0)
                ans--;
            cout<<ans<<endl;
        }
    }
    return 0;
}
