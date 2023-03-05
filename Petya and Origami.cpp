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
    ll n,t,blue,red,green,r,total=0;
    cin>>n>>t;
    red=2*n;
    green=5*n;
    blue=8*n;
    total=red/t+green/t+blue/t;
    if(red%t!=0)total++;
    if(green%t!=0)total++;
    if(blue%t!=0)total++;
    cout<<total<<endl;
    return 0;
}
