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
    ll n,i,s=0,d;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++) {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0; i<n-1; i++) {
        d=a[i+1]-a[i];
        if(d>1){
            s+=d-1;
        }

    }
    cout<<s<<endl;
    return 0;
}
