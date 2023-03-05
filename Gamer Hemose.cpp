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
    ll t,n,total,i,j,h;
    cin>>t;
    while(t--) {
        cin>>n>>h;
        int a[n];
        for(i=0; i<n; i++) {
            cin>>a[i];
        }
        sort(a,a+n);
        total=h/(a[n-1]+a[n-2]);
        i=h%(a[n-1]+a[n-2]);
        if(i==0)
            total*=2;
        else if(i>a[n-1])
            total=total*2+2;
        else
            total=total*2+1;
        cout<<total<<endl;
    }
    return 0;
}
