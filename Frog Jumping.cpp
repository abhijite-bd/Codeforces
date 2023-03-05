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
    ll a,b,n,t,k,i,d,r;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>a>>b>>n;
        d=n/2;
        r=n%2;
        r==0?cout<<d*a-d*b<<endl:cout<< d*a-d*b+a<<endl;
    }
    return 0;
}
