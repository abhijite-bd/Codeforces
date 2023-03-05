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
    int i,t,n,m,j;
    ll a,sum;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>n>>m;
        sum=0;
        for(j=0; j<n; j++) {
            cin>>a;
            sum+=a;
        }
        if(sum==m)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
