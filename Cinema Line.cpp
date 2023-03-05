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
    int n,t,f=1,s=0,i,c=0;
    cin>>n;
    int a[n+1];
    for(i=1; i<=n; i++) {
        cin>>a[i];
        c=i*25;
        if(a[i]>c)
            f=0;
    }
    if(f==0)
        cout<<"NO\n";
    else
        cout<<"YES\n";
    return 0;
}
