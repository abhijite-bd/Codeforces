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
    int n,i,j,mx=-1,mn=10000,mxp,mnp,k=0,temp;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++) {
        cin>>a[i];
        if(a[i]>mx) {
            mx=a[i];
            mxp=i;
        }
        if(a[i]<=mn) {
            mn=a[i];
            mnp=i;
        }
    }
//    for(i=mxp; i>0; i--) {
//        temp=a[i-1];
//        a[i-1]=a[i];
//        a[i]=temp;
//        k++;
//    }
//    for(auto e:a)
//        cout<<e<<ss;
//    cout<<endl;
//    cout<<mnp<<endl;
//    k=mxp;
    if(mxp>mnp)
        mnp++;
    cout<<mxp+n-1-mnp<<endl;
    return 0;
}
