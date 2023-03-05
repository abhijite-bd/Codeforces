#include<iostream>
#include<math.h>
#include<algorithm>
#include<string>
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
    int t,n,k,i,j;
    cin>>n>>k;
    string s;
    cin>>s;
    for(i=0; i<n; i++) {
        if(s[i]=='G' or s[i]=='T') {
            for(j=i+k; j<n; j+=k) {
                if(s[j]=='G' or s[j]=='T') {
                    cout<<"YES"<<endl;
                    return 0;
                }
                if(s[j]=='#') {
                    cout<<"NO\n";
                    return 0;
                }
            }
            cout<<"NO\n";
            return 0;
        }
    }
}
