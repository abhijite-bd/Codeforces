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
    int i,j,n;
    string s;
    bool b1=1,b2=1,b3=1;
    for(i=0; i<3; i++) {
        getline(cin,s);
        n=s.size();
        int v=0;
        for(j=0; j<n; j++) {
            if(s[j]=='a' or s[j]=='e' or s[j]=='i' or s[j]=='o' or s[j]=='u')
                v++;
        }
        if(i==0 and v==5)
            b1=0;
        if(i==1 and v==7)
            b2=0;
        if(i==2 and v==5)
            b3=0;
//        cout<<v<<endl;
    }
    if(b1==0 and b2==0 and b3==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO\n";
    return 0;
}
