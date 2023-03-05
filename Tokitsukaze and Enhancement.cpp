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
    int n;
    cin>>n;
    int r=n%4;
    if(r==0)
        cout<<1<<ss<<'A'<<endl;
    else if(r==1)
        cout<<0<<ss<<'A'<<endl;
    else if(r==2)
        cout<<1<<ss<<'B'<<endl;
    else if(r==3)
        cout<<2<<ss<<'A'<<endl;
    return 0;
}
