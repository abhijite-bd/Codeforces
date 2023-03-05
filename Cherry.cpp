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
    ll t,ans=-1,l;
    int n,i;
    cin>>t;
    while(t--) {
        cin>>n;
        ll a[n];
        for(i=0; i<n; i++) {
            cin>>a[i];
        }
        for(i=0; i<n-1; i++) {
            l=a[i]*a[i+1];
            ans=max(ans,l);
        }
        sort(a,a+n);
        ll ans2=(a[0]*a[n-1]);

        cout<<max(ans,ans2)<<endl;
        ans=-1;
    }
    return 0;
}
