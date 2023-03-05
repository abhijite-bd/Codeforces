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
    ll t,n,i,j,k;
    cin>>t;
    while(t--) {
        j=0;
        cin>>n>>k;
        ll a[n];
        for(i=0; i<n; i++) {
            cin>>a[i];
        }
        sort(a,a+n,greater<int>());
        for(i=0; i<k; i++) {
            j+=a[i+1];
        }
        cout<<j+a[0]<<endl;
    }
    return 0;
}
