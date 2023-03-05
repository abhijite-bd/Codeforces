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
    int n,i,m=1,j=1;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++) {
        cin>>a[i];
    }
    if(n==1)
        cout<<1<<endl;
    else {
        sort(a,a+n);
        for(i=0; i<n-1; i++) {
            if(a[i]==a[i+1]) {
                j++;
                if(j>m)
                    m=j;
            } else
                j=1;
        }
        cout<<m<<endl;
    }
    return 0;
}
