#include<bits/stdc++.h>
#define   ll long long int
#define   gcd(a,b)   __gcd(a,b)
#define   lcm(a,b)   (a*b)/gcd(a,b)
#define   ss " "
#define   fast()   ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define   max3(a,b,c) max(max(a,b),c)
#define   min3(a,b,c) min(min(a,b),c)
#define   pb push_back
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
        for(i=0; i<n; i++) {
            cin>>b[i];
            if(a[i]<b[i])
                swap(a[i],b[i]);
        }
        sort(a,a+n);
        sort(b,b+n);
        cout<<a[n-1]*b[n-1]<<endl;
    }
    return 0;
}
