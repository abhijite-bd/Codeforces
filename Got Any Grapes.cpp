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
    int a,d,m,g,p,b,x;
    cin>>a>>d>>m;
    cin>>g>>p>>b;
    if(a>g) {
        cout<<"NO\n";
        return 0;
    } else {
        g-=a;
    }
    if(d>g+p) {
        cout<<"NO\n";
        return 0;
    } else
        x=b+g+p-d;
    if(m>x) {
        cout<<"NO\n";
        return 0;
    } else
        cout<<"YES\n";
    return 0;
}
