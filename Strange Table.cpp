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
    ll r,c;
    ll n,t,m,i,a;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>n>>m>>a;
        a--;
        r=a%n;
        c=a/n;
        cout<<r*m+c+1<<endl;
    }
    return 0;
}
