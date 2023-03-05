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
    int n;
    cin>>n;
    int a[n],i,j,ch=0,bi=0,ba=0;
    for(i=0; i<n; i++) {
        cin>>a[i];
        if(i%3==0)
            ch+=a[i];
        else if(i%3==1)
            bi+=a[i];
        else if(i%3==2)
            ba+=a[i];
    }
//    cout<<ch<<ss<<bi<<ss<<ba<<endl;
    int mx=max3(ch,bi,ba);
    if(mx==ch)
        cout<<"chest\n";
    else if(mx==bi)
        cout<<"biceps\n";
    else
        cout<<"back\n";
    return 0;
}
