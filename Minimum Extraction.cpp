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
    fast();
    ll t,n,i;
    cin>>t;
    while(t--) {
        ll ans,ans2=-1,num;
        cin>>n;
        ll a[n];
        for(i=0; i<n; i++) {
            cin>>a[i];
        }
        if(n==1)
            cout<<a[0]<<endl;
        else {
            sort(a,a+n);
            ans=a[0];
            num=0;
            for(i=0; i<n; i++) {
                a[i]-=num;
                num+=a[i];
            }
            for(i=0; i<n; i++) {
                ans2=max(a[i],ans2);
            }
            cout<<ans2<<endl;
        }
    }
    return 0;
}
