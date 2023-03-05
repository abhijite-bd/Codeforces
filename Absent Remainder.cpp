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
void solve() {
    ll n;
    cin>>n;
    ll a[n];
    vector <bool> p(1e6+1,0);
    for(ll i=0;i<n;i++) {
        cin>>a[i];
        p[a[i]]=1;
    }
    sort(a,a+n);
    vector<pair<ll,ll>> ans;
    for(ll i=1;i<n;i++) {
        for(ll j=0;j<i;j++) {
            if(p[a[i]%a[j]]==0)
            ans.push_back({a[i],a[j]});
            if(ans.size()>=(n/2))
            break;
        }
        if(ans.size()>=(n/2))
        break;
    }
    for(ll i=0;i<ans.size();i++){
        cout<<ans[i].first<<" "<<ans[i].second<<"\n";
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        solve();
    }
}
