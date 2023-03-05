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
    int n,mx=-1,i,j,a0=0,a1=0;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++) {
        cin>>a[i];
    }
    for(i=0; i<n; i++) {
        if(a[i]==0) {
            a0++;
            if(a0>mx)
                mx=a0;
        } else {
            a1++;
            if(a0>0)
                a0--;
        }
    }
    cout<<mx+a1<<endl;
    return 0;
}
