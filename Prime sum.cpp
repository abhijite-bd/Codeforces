#include<bits/stdc++.h>
#define   ll long long int
#define   gcd(a,b)   __gcd(a,b)
#define   lcm(a,b)   (a*b)/gcd(a,b)
#define   ss " "
#define   fast()   ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define   max3(a,b,c) max(max(a,b),c)
#define   min3(a,b,c) min(min(a,b),c)
#define   pb push_back
using namespace std;
vector<ll>v;
int prime(int p)
{
    int i;
    int n=p/2;
    for(i=2; i<n; i++) {
        if(p%i==0)
            return 0;
    }
    v.pb(p);
}
int main()
{
    ll n,i;
    cin>>n;
    for(i=3; i+2<n; i=i+2) {
        prime(i);
    }
    vector<pair<int,ll>>ans;
    for(i=0; v[i]+2<=n; i++) {
        if(v[i]<n and v[i]+2==v[i+1])
            ans.pb({2,v[i]});
        }
    cout<<ans.size()<<endl;
    for( auto e:ans)
        cout<<e.first<<ss<<e.second<<endl;
    return 0;
}
