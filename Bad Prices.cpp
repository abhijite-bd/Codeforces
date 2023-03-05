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
    ll t,n,i,j;
    cin>>t;
    while(t--) {
        cin>>n;
        ll a[n];
        int  c=0;
        for(i=0; i<n; i++) {
            cin>>a[i];
        }
        for(i=0; i<n-1; i++) {
            if(a[i]>a[i+1])
                c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
