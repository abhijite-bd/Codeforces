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
    int a,b,t,i;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>a>>b;
        int l=max(a,b)%min(a,b);
        l==0?cout<<"YES\n":cout<<"NO\n";
    }
    return 0;
}
