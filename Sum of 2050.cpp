#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<queue>
#include<set>
#define   ll long long int
#define   gcd(a,b)   __gcd(a,b)
#define   lcm(a,b)   (a*b)/gcd(a,b)
#define   ss " "
#define   fast()   ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define   max(a,b,c) max(max(a,b),b)
#define   min(a,b,c) min(min(a,b),c)
using namespace std;
int main()
{
    fast();
    int t;
    ll a,d,r,sq,n,m,s;
    cin>>t;
    while(t--) {
        cin>>n;
        s=0;
        if(n%2050!=0)
            cout<<-1<<endl;
        else {
            n=n/2050;
            while(n!=0) {
                s+=n%10;
                n/=10;
            }
            cout<<s<<endl;
        }
    }
    return 0;
}
