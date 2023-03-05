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
    int t,i,a,b,x,y;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>a>>b;
        x=a;
        y=a*2;
        if(y>b)
            cout<<-1<<" "<<-1<<endl;
        else {
            cout<<x<<" "<<y<<endl;
        }
    }
    return 0;
}
