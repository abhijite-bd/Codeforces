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
    int t,i,a,b,c,d,j,m;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>a>>b>>c>>d;
        m=a;
        for(j=c; j<=d; j++) {
            if(m!=j) {
                cout<<m<<ss<<j<<endl;
                break;
            }
        }
    }
    return 0;
}
