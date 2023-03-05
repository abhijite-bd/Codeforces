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
    int i,t,m,n,a,b,r;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>m>>n;
        r=0;
        a=min(m,n);
        r=a*2;
        b=abs(m-n);
        if(m==n)
            cout<<r<<endl;
        else {
            r++;
            b--;
            r+=b*2;
            cout<<r<<endl;
        }
    }
    return 0;
}
