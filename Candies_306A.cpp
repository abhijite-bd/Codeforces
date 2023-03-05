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
    int n,m,i,j;
    cin>>n>>m;
    if(n%m==0)
        for(i=0; i<m; i++) {
            cout<<n/m<<ss;
        }
    else {
        j=n%m;
        for(i=0; i<m; i++) {
            if(m-i>j)
                cout<<n/m<<ss;
            else
                cout<<n/m+1<<ss;
        }
    }
    cout<<endl;
    return 0;
}
