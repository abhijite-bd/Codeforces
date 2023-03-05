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
    long int i,t,n,m;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>n>>m;
        if(n==1)
            cout<<"YES\n";
        else if(m==1)
            cout<<"YES\n";
        else if(n==2 and m==2)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
