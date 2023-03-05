#include<iostream>
using namespace std;
int main()
{
    int a[100],b,i,j=0,n;
    cin>>n>>b;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>=a[b-1] && a[i]>0)
            j++;
    }
cout<<j<<endl;
    return 0;
}
