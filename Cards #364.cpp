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
    int n,i,j,s,mx=-1,mn=100000;
    cin>>n;
    int a[n+1];
    for(i=1; i<=n; i++) {
        cin>>a[i];
        if(a[i]>mx)
            mx=a[i];
        if(a[i]<mn)
            mn=a[i];
    }
    s=mn+mx;
    for(i=1; i<=n; i++) {
        for(j=2; j<=n; j++) {
            if(a[i]+a[j]==s and i!=j) {
                a[j]=-1;
                a[i]=-1;
                cout<<i<<ss<<j<<endl;
                break;
            }
        }
    }
    return 0;
}
