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
    int n,i,m;
    cin>>m;
    int a[m];
    for(i=0; i<m; i++) {
        cin>>a[i];
    }
    sort(a,a+m);
    cin>>n;
    int b[n];
    for(i=0; i<n; i++) {
        cin>>b[i];
    }
    sort(b,b+n);
    cout<<a[m-1]<<ss<<b[n-1]<<endl;
    return 0;
}
