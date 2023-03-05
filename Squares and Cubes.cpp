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
    set<ll>v;
    for(i=1; i<1000000; i++) {
        if(i*i<=1e9)
            v.insert(i*i);
        if(i*i*i<=1e9)
            v.insert(i*i*i);
    }
    cin>>t;
    while(t--) {
        cin>>n;
        int ans=0;
        for(auto it=v.begin(); it!=v.end(); ++it) {
            if(*it<=n)
                ans++;
            else
                break;
        }
        cout<<ans<<endl;
    }
    return 0;
}
