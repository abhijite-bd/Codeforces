#include<bits/stdc++.h>
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
    int ans=8,f1=0,f2=0;
    char a[3];
    cin>>a;
    if(a[0]=='a' or a[0]=='h') {
        ans-=3;
        f1++;
    }
    if(a[1]=='1' or a[1]=='8') {
        ans-=3;
        f2++;
    }
    if(f1 and f2)
        ans++;
    cout<<ans<<endl;
    return 0;
}
