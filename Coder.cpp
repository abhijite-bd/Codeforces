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
    int n,i,j,ans;
    cin>>n;
    ans=n*n;
    cout<<(ans%2==0?ans/2:ans/2+1)<<endl;
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            if(i%2==0) {
                if(j%2==0)
                    cout<<'C';
                else
                    cout<<'.';
            } else {
                if(j%2==0)
                    cout<<'.';
                else
                    cout<<'C';
            }
        }
        cout<<endl;
    }
    return 0;
}
