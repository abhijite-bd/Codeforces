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
    ll t,a,b,x,y;
    cin>>t;
    while(t--) {
        cin>>x>>y;
        cin>>a>>b;
        ll m1=(x+y)*a;
        ll m2=min(x,y)*b+abs(x-y)*a;
        cout<<min(m1,m2)<<endl;
    }
    return 0;
}
