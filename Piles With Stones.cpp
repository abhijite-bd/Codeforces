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
    int n,i,sum1=0,sum2=0;
    cin>>n;
    int a[n],b[n];
    for(i=0; i<n; i++) {
        cin>>a[i];
        sum1+=a[i];
    }
    for(i=0; i<n; i++) {
        cin>>b[i];
        sum2+=b[i];
    }
    if(sum2<=sum1)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
