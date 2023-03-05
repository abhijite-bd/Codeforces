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
    ll t,n,k,r,d;
    double s;
    cin>>t;
    while(t--) {
        cin>>n>>k;
        d=sqrt(n);
        if(n%2!=0) {
            if(k<=d and k%2==1)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        } else {
            if(k<=d and k%2==0)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }
    return 0;
}
