#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<queue>
#define ll long long int
using namespace std;
int main()
{
    int t,n,i,c,d;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>n>>d;
        if(n<=2)
            cout<<1<<endl;
        else {
            n=n-2;
            c=n/d;
            n%d==0?cout<<c+1<<endl:cout<<c+2<<endl;
        }
    }
    return 0;
}
