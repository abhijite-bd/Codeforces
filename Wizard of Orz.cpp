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
    int t,i,j,n,a[3]= {9,8,9};
    cin>>t;
    while(t--) {
        cin>>n;
        if(n<=3) {
            for(i=0; i<n; i++) {
                cout<<a[i];
            }
        }
        else {
            for(i=0; i<3; i++) {
                cout<<a[i];
            }
           n=n-3;
            for(i=0; i<n; i++) {
                cout<<i%10;
            }
        }
        cout<<endl;
    }
    return 0;
}
