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
    int n,i,j,c=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
    cin>>a[i];
    }
    for(i=0; i<n; i++) {
        for(j=i+1; j<n; j++) {
            if(a[i]==a[j])
                a[i]=-1;
        }
    }
    for(i=0; i<n; i++) {
        if(a[i]>0)
            c++;
    }
    cout<<c<<endl;
    for(i=0; i<n; i++) {
        if(a[i]>0)
            cout<<a[i]<<ss;
    }
    return 0;
}
