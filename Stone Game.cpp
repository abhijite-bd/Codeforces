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
void solve()
{
    int n,i,j,t;
    int p1,p2,mx=-1,mn=100000;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++) {
        cin>>a[i];
        if(a[i]>mx) {
            mx=a[i];
            p1=i+1;
        }
        if(a[i]<mn) {
            mn=a[i];
            p2=i+1;
        }
    }
    n++;

    int ans1=max(p1,p2);
    int ans2=max(n-p1,n-p2);
    int ans3=min(p1,n-p1)+min(p2,n-p2);
    cout<<min3(ans1,ans2,ans3)<<endl;
}
int main()
{
    fast();
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}
