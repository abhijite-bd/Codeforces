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
    int t,n,b,c,ans=0;
    cin>>n;
    int i,a[n];
    for(i=0; i<n-1; i++) {
        cin>>a[i];
    }
    cin>>b>>c;
    for(i=b-1; i<c-1; i++) {
        ans+=a[i];
    }
    cout<<ans<<endl;
    return 0;
}
