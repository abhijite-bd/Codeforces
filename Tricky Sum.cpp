#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<queue>
#define ll long long int
#define   gcd(a,b)   __gcd(a,b)
#define   lcm(a,b)   (a*b)/gcd(a,b)
#define ss " "
using namespace std;
int main()
{
    ll t,i,n,sum,j,sum2;
    cin>>t;
    while(t--) {
        j=1;
        sum2=0;
        cin>>n;
        sum=n*(n+1)/2;
        while(j<=n) {
            sum2+=j;
            j*=2;
        }
//        cout<<sum2<<endl;
        cout<<sum - sum2*2<<endl;
    }
    return 0;
}
