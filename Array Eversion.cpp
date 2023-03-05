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
    ll t,n,i,j,ans;
    cin>>t;
    while(t--) {
        cin>>n;
        ans=0;
        ll a[n],b[n];
        for(i=0; i<n; i++) {
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b,b+n);
        ll mx=b[n-1];
        ll mx2=b[n-2];
        for(i=n-1; i>=0; i--) {
            if(a[i]==mx)
                break;
            if(a[i]==mx2) {
                ans++;
                break;
            }
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
