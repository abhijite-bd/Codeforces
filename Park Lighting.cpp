#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
    int a,n,d,j,m;
    cin>>d;
    for(j=0; j<d; j++)
    {
        cin>>m>>n;
        a=n*m;
        if(a==1)
            cout<<1<<endl;
        else if(a%2==0)
            cout<<a/2<<endl;
        else
            cout<<a/2+1<<endl;
    }

    return 0;
}
