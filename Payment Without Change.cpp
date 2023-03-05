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
    int a,b,s,n,t,j,i,r;
    cin>>t;
    while(t--) {
        cin>>a>>b>>n>>s;
        r=min(s/n,a);
        r=s-r*n;
        if(r<=b)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
