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
#define   max3(a,b,c) max(max(a,b),c)
#define   min3(a,b,c) min(min(a,b),c)
using namespace std;
int main()
{
    ll t,n,i,j,b,c;
    cin>>t;
    while(t--) {
        cin>>n;
        double a=sqrt(n);
        b=a;
        c=b*b+b+1;
        if(a==b)
            cout<<b<<ss<<1<<endl;
        else if(n==c)
            cout<<b+1<<ss<<b+1<<endl;
        else {
            if(n>c)
                cout<<b+1<<ss<<c+b-n+1<<endl;
            else
                cout<<n-b*b<<ss<<b+1<<endl;
        }
    }

    return 0;
}
