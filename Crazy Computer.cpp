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
    ll n,c,i,j=1;
    cin>>n>>c;
    int a[n];
    for(i=0; i<n; i++) {
        cin>>a[i];
    }
    for(i=1; i<n; i++) {
        if(a[i]-a[i-1]<=c) {
            j++;
        } else
            j=1;
    }
    cout<<j<<endl;
    return 0;
}
