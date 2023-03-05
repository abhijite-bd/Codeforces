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
    int n,s,i,sum=0;
    cin>>n>>s;
    int a[n];
    for(i=0; i<n; i++) {
        cin>>a[i];
        sum+=a[i];
    }
    sort(a,a+n);
    sum-=a[n-1];
    if(s>=sum)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
