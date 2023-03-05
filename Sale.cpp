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
    int n,m,i,sum=0;
    cin>>n>>m;
    int a[n];
    for(i=0; i<n; i++) {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0; i<m; i++) {
        if(a[i]<0) {
            a[i]=a[i]*-1;
            sum+=a[i];
        }
    }
    cout<<sum<<endl;
    return 0;
}
