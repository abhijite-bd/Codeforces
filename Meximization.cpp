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
    int t,n,i,j;
    cin>>t;
    while(t--) {
        cin>>n;
        int a[n],b[n];
        for(i=0; i<n; i++) {
            cin>>a[i];
        }
        sort(a,a+n);
        j=0;
        for(i=0;i<n;i++)
        {
            if(a[i]==a[i+1])
            {
                b[j]=a[i];
                j++;
            }
            else
                cout<<a[i]<<ss;
        }
        for(i=0;i<j;i++)
        {
        cout<<b[i]<<ss;
        }
        cout<<endl;
    }
    return 0;
}
