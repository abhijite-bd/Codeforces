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
    int i,j,n,m,t;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>n>>m;
        int a[n],s=0;
        for(j=0; j<n; j++) {
            cin>>a[j];
            s+=a[j];
        }
        if(s>=m)
            cout<<m<<endl;
        else
            cout<<s<<endl;
    }
    return 0;
}
