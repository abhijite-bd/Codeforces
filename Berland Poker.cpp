#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<queue>
#include<set>
#define ll long long int
#define   gcd(a,b)   __gcd(a,b)
#define   lcm(a,b)   (a*b)/gcd(a,b)
#define ss " "
using namespace std;
int main()
{
    int t,n,m,k,c,r;
    cin>>t;
    while(t--) {
        cin>>n>>m>>k;
        if(m==0 or m==n)
            cout<<0<<endl;
        else if(m<=n/k)
            cout<<m<<endl;
        else if(m>n/k) {
            c=n/k;
            int ans=c;
            k--;
            m=m-c;
            r=(m%k);
            if(r>0)
            r=1;
            ans=c-(m/k)-r;
            cout<<ans<<endl;
        }
    }
    return 0;
}
