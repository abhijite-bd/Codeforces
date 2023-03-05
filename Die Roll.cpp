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
    int a,b,mx,i;
    cin>>a>>b;
    mx=6-max(a,b)+1;
    if(mx==0)
        cout<<"0/1"<<endl;
    else if(mx==1)
        cout<<"1/6"<<endl;
    else if(mx==2)
        cout<<"1/3"<<endl;
    else if(mx==3)
        cout<<"1/2"<<endl;
    else if(mx==4)
        cout<<"2/3"<<endl;
    else if(mx==5)
        cout<<"5/6"<<endl;
    else if(mx==6)
        cout<<"1/1"<<endl;

    return 0;
}
