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
    int n,k;
    cin>>n>>k;
    int i,mn1=0,mn2=0;
    ll a[n];
    for(i=0; i<n; i++) {
        cin>>a[i];
    }
    for(i=0; i<n; i++) {
        if(a[i]>k)
            break;
        else
            mn1++;
    }
    for(i=n-1; i>=0; i--) {
        if(a[i]>k)
            break;
        else
            mn2++;
    }
    cout<<(mn1+mn2>n?n:mn1+mn2)<<endl;
    return 0;
}
