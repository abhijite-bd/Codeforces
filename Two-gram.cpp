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
string s;
int check(string s2,int n)
{
    int c=0,i,f;
    for(i=0; i<n-1; i++) {
        if(s[i]==s2[0] and s[i+1]==s2[1]) {
            c++;
        }
    }

    return c;

}
int main()
{
    int n,i,j,mx=-1;
    string ans;
    cin>>n;
    cin>>s;
    for(i=0; i<n-1; i++) {
        string s2=s.substr(i,2);
        int temp=check(s2,n);
        if(temp>mx) {
            mx= temp;
            ans= s2;
        }
    }
    cout<<ans<<endl;

}
