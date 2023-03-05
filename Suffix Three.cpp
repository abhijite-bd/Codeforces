#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<iomanip>
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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    int t,n,i,j;
    cin>>t;
    while(t--) {
        cin>>s;
        n=s.size();
        if(s[n-1]=='o')
            cout<<"FILIPINO"<<endl;
        else if(s[n-1]=='u')
            cout<<"JAPANESE"<<endl;
        else
            cout<<"KOREAN"<<endl;
    }
    return 0;
}
