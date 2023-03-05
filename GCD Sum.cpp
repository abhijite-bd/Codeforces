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
ll sumdigit(ll a)
{
    int s=0;
    while(a!=0) {
        s+=a%10;
        a/=10;
    }
    return s;
}
int main()
{
    ll t,i,n,d,p;
    cin>>t;
    while(t--) {
        cin>>n;
        while(1) {
            d=sumdigit(n);
            p=gcd(n,d);
            if(p!=1) {
                cout<<n<<endl;
                break;
            } else
                n++;
        }

    }
    return 0;
}
