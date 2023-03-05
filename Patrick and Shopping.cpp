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
    long int a,b,c,x,y,z,d;
    cin>>a>>b>>c;
    d=a+b+c;
    x=min(d,2*(a+b));
    y=min(d,2*(c+b));
    z=min(d,2*(c+a));
    cout<<min(min(x,y),min(y,z))<<endl;
    return 0;
}
