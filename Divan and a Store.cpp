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
    fast();
    ll t,n,r,l,k,i,ans,a;
    multiset<ll> s;
    cin>>t;
    while(t--) {
        ans=0;
        ll total=0;
        cin>>n>>l>>r>>k;
        for(i=0; i<n; i++) {
            cin>>a;
            if(a>=l and a<=r)
                s.insert(a);
        }
//        for(auto e:s)
//            cout<<e<<ss;
//        cout<<endl;
        auto it=s.begin();
        while(!s.empty() or it!=s.end() ) {
            total+=*it;
            if(total>k)
                break;
            else
                ans++;
            it++;
        }
        s.clear();
        cout<<ans<<endl;
    }
    return 0;
}
