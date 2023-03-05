#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<queue>
#include<set>
#define   ll long long int
#define   gcd(a,b)   __gcd(a,b)
#define   lcm(a,b)   (a*b)/gcd(a,b)
#define   ss " "
#define   fast()   ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define   max3(a,b,c) max(max(a,b),c)
#define   min3(a,b,c) min(min(a,b),c)
using namespace std;
int main()
{
    int t,n,i,j,k;
    cin>>t;
    while(t--) {
        cin>>n>>k;
        int a[n];
        for(i=0; i<n; i++) {
            cin>>a[i];
        }
        i=0;
        while(k>0 and i<n)
        {
            if(i==n-1)
                break;
            if(a[i]==0) {
                i++;
            } else {
                a[i]--;
                a[n-1]++;
                k--;
            }
        }
        for(i=0; i<n; i++) {
            cout<<a[i]<<ss;
        }
        cout<<endl;
    }
    return 0;
}
