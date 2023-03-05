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
    int i,t,n,c0,c1,h,x,y,j,m0,m1,m,m3;
    cin>>t;
    string s;
    for(i=0; i<t; i++) {
        x=0;
        y=0;
        cin>>n>>c0>>c1>>h;
        cin>>s;
        for(j=0; j<n; j++) {
            if(s[j]=='0')
                x++;
            else
                y++;
        }
//        cout<<x<<ss<<y<<endl;
        m=x*c0+y*c1;
        m0=y*h+n*c0;
        m1=x*h+n*c1;
//        cout<<m<<ss<<m0<<ss<<m1<<endl;
        cout<<min(m,min(m0,m1))<<endl;
    }
    return 0;
}
