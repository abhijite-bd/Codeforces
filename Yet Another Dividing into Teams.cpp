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
    int t,n,i,k,j;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>n;
        int a[n];
        k=0;
        for(j=0; j<n; j++) {
            cin>>a[j];
        }
        if(n==1)
            cout<<1<<endl;
        else {
            sort(a,a+n);
            for(j=0; j<n-1; j++) {
                if(a[j+1]-a[j]==1) {
                    k++;
                }
            }
            if(k==0)
                cout<<1<<endl;
            else
                cout<<2<<endl;
        }

    }
    return 0;
}
