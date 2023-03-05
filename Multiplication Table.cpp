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
    ll n,a,i,j,c=0;
    cin>>n>>a;
    n=min(a,n);
    for(i=1; i<=n; i++) {
        if((a%i==0)and a/i<=n)
            c++;
    }
    cout<<c<<endl;
    return 0;
}
