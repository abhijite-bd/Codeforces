#include<iostream>
using namespace std;
int main()
{
    long long a,b,n,sum,r,div;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a>>b;
        if(b>a)
            swap(a,b);
        sum=a-b;
        div=sum/10;
        r=sum%10;
        if(r==0)
            cout<<div<<endl;
        else
            cout<<div+1<<endl;
    }
    return 0;
}
