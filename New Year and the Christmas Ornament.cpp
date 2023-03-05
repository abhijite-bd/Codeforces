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
    int bl,ye,red,mn,s=0;
    cin>>ye>>bl>>red;
    if(red<=ye and red<=bl)
        s=3*red-3;
    else if(bl<=red and bl<=ye) {
        if(bl==red)
            s=3*bl-3;
        else
            s=bl*3;
    } else if(ye<=red and ye<=bl) {
        if(ye+1<=bl and ye+2<=red)
            s=3*ye+3;
        else
            s=ye*3;
    }
    cout<<s<<endl;
    return 0;
}
