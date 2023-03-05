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
    ll a,n,t,k,s,i,j;
    cin>>t;
    while(t--) {
        cin>>n>>k;
        if(n%2==0)
            n+=2;
        else {
            for(i=3; i<=n; i++) {
                if(n%i==0) {
                    n+=i;
                    break;
                }
            }
        }
        cout<<n+2*(k-1)<<endl;
}
return 0;
}
