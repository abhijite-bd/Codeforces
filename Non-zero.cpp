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
    int t,n,i,j,mul,sum,step;
    cin>>t;
    while(t--) {
        sum=0;
        mul=1;
        step=0;
        cin>>n;
        int a[n];
        for(i=0; i<n; i++) {
            cin>>a[i];
            if(a[i]==0) {
                a[i]++;
                step++;
            }
            sum+=a[i];
            mul*=a[i];
        }
        sort(a,a+n);
        if(mul==0 or sum==0) {
            step++;
        }
        cout<<step<<endl;
    }
    return 0;
}
