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
    ll a,d,r;
    cin>>a;
    if(a%3==0)
        cout<<1<<ss<<1<<ss<<a-2<<endl;
    else if(a%3==1)
        cout<<1<<ss<<2<<ss<<a-3<<endl;
    else if(a%3==2)
        cout<<2<<ss<<2<<ss<<a-4<<endl;
    return 0;
}
