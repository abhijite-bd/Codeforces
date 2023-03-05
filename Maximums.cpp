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
    int i,j,m,n;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++) {
        cin>>a[i];
    }
    m=a[0];
    cout<<a[0]<<ss;
    for(i=1; i<n; i++) {
        cout<<m+a[i]<<ss;
        if(m<m+a[i])
            m=m+a[i];
    }
    cout<<endl;
    return 0;
}
