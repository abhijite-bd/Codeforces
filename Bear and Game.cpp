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
    int n,i,ans,p;
    cin>>n;
    p=0;
    ans=0;
    ll a[n];
    for(i=0; i<n; i++) {
        cin>>a[i];
    }
    for(i=0; i<n; i++) {
        int x=abs(p-a[i]);
        if(x>15)
            break;
        else {
            ans=a[i];
            p=a[i];
        }
    }
    ans+15>90?cout<<90<<endl:cout<<ans+15<<endl;
    return 0;
}
