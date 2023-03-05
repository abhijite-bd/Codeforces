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
    ll t,n,i,ans2,ans1,rem;
    cin>>t;
    while(t--) {
        cin>>n;
        rem=n%3;
        if(rem==2) {
            ans2=n/3+1;
            ans1=n-2*ans2;
        } else {
            ans2=n/3;
            ans1=n-2*ans2;
        }
        cout<<ans1<<ss<<ans2<<endl;
    }
    return 0;
}
