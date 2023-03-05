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
    ll n,k,r;
    cin>>n>>k;
    r=n/k;
    if(r&1)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
