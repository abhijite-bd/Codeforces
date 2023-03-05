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
    int i,j,k,t,n;
    cin>>t;
    while(t--) {
        cin>>n;
        int a[n],b[n],c[n];
        j=0;
        k=0;
        for(i=0; i<n; i++) {
            cin>>a[i];
        }
        for(i=0; i<n; i++) {
            if(a[i]%2==0) {
                b[j]=a[i];
                j++;
            } else {
                c[k]=a[i];
                k++;
            }
        }
        for(i=0; i<k; i++) {
            cout<<c[i]<<ss;
        }
        for(i=0; i<j; i++) {
            cout<<b[i]<<ss;
        }
        cout<<endl;
    }
    return 0;
}
