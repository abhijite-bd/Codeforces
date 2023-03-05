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
    ll a;
    cin>>a;
    a--;
    while(a>=5) {
        a-=5;
        a/=2;
    }
    if(a==0)
        cout<<"Sheldon"<<endl;
    else if(a==1)
        cout<<"Leonard"<<endl;
    else if(a==2)
        cout<<"Penny"<<endl;
    else if(a==3)
        cout<<"Rajesh"<<endl;
    else if(a==4)
        cout<<"Howard"<<endl;

    return 0;
}
