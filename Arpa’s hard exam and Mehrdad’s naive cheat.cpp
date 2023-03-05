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
    ll a;
    cin>>a;
    if(a==0)
        cout<<1<<endl;
    else if(a%4==1)
        cout<<8<<endl;
    else if(a%4==2)
        cout<<4<<endl;
    else if(a%4==3)
        cout<<2<<endl;
    else if(a%4==0)
        cout<<6<<endl;
    return 0;
}
