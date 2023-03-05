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
    ll a;
    cin>>a;
    if(a<6)
        cout<<0<<endl;
    else if(a<=10)
        cout<<10<<endl;
    else {
        int r=a%10;
        if(r<=5)
            cout<<a-r<<endl;
        else
            cout<<a+(10-r)<<endl;
    }
    return 0;
}
