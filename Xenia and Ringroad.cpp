#include<iostream>
using namespace std;
int main()
{
    long long int n,m,i,j,c;
    cin>>m>>n;
    long int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    c=a[0]-1;
    for(i=0; i<n-1; i++)
    {
        if(a[i]>a[i+1])
            c+=a[i+1]-a[i]+m;
        else
            c+=a[i+1]-a[i];
    }
    cout<<c<<endl;
    return 0;
}
