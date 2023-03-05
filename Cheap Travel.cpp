#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<queue>
using namespace std;
int main()
{
    int n,m,a,b,r,s=0,d;
    cin>>n>>m>>a>>b;
    if(m>n)
        m=n;
    d=n/m;
    r=n%m;
    if(d*b<=n*a) {
        s=d*b;
        if(r*a<=1*b)
            s+=r*a;
        else
            s+=1*b;
    } else {
        s=n*a;
    }
    cout<<s<<endl;
    return 0;
}
