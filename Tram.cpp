#include<iostream>
using namespace std;
int main()
{
    int i,max=0,n,a,b,sum=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a>>b;
        sum=sum-a+b;
        if(sum>max)
            max=sum;
    }
    cout<<max;
    return 0;
}
