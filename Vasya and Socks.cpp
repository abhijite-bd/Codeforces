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
    int n,m,s,t,p,f;
    cin>>n>>m;
    int sum=n;
    while(1) {
        p=n/m;
        f=p+(n%m);
        n=f;
        sum+=p;
        if(f<m)
            break;
    }
    cout<<sum<<endl;
    return 0;
}
