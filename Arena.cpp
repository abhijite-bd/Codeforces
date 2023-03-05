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
    int t,i,n,c,s,j;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>n;
        int a[n];
        c=0;
        for(j=0; j<n; j++) {
            cin>>a[j];
        }
        sort(a,a+n);
        int m=a[0];
        for(j=1; j<n; j++) {
            if(a[j]!=m)
                break;
            else
                c++;
        }
        cout<<n-c-1<<endl;
    }
    return 0;
}
