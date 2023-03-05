#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<queue>
#include<set>
#define ll long long int
#define   gcd(a,b)   __gcd(a,b)
#define   lcm(a,b)   (a*b)/gcd(a,b)
#define ss " "
using namespace std;
int main()
{
    ll r,g,b,w,t,i,j,f;
    cin>>t;
    while(t--) {
        cin>>r>>g>>b>>w;
        f=0;
        if(r==0 and g==0 and b==0 and w==0)
            cout<<"YES\n";
        else {
            f=r%2+g%2+w%2+b%2;
            if(f==0 or f==1) {
                cout<<"YES\n";
                continue;
            }
            if((f==3 or f==4)and g and r and b) {
                cout<<"YES\n";
                continue;
            }
            cout<<"NO\n";
        }
    }
    return 0;
}
