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
    ll t,n,i,j,k,temp;
    cin>>t;
    while(t--) {
        cin>>n;
        ll a[2*n+1];
        for(j=0;j<2*n;j++)
        {
        cin>>a[j];
        }
        sort(a,a+2*n);
        for(i=0; i<n; i++) {
            cout<<a[i]<<ss<<a[2*n-i-1]<<ss;
//            cout<<i<<ss<<2*n-1-i<<ss;
        }
        cout<<endl;
    }
    return 0;
}
