#include<iostream>
#include<math.h>
#include<algorithm>
#include<string>
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
    int a,b,ans,c,i;
    cin>>a>>b>>c;
    ans=0;
    b-=2;
    for(i=0; i<c; i++) {
        ans+=a*2+b*2;
        a-=4;
        b-=4;
    }
    cout<<ans<<endl;
    return 0;
}