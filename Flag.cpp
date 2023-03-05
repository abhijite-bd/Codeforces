#include<bits/stdc++.h>
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
    int n,m,i,j,flag=1,flag2=1;
    cin>>n>>m;
    string s;
    char str[n];
    for(i=0; i<n; i++) {
        cin>>s;
        char c=s[0];
        str[i]=c;
        for(j=1; j<m; j++) {
            if(s[j]!=c)
                flag=0;
        }
    }
//    cout<<str<<endl;
    for(i=0; i<n-1; i++) {
        if(str[i]==str[i+1])
            flag2=0;
    }
    if(flag and flag2)
        cout<<"YES"<<endl;
    else
        cout<<"NO\n";
    return 0;
}
