#include<iostream>
using namespace std;
int main()
{
    int n,i,count=1,s;
    cin>>n;
    int a[n],b[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        b[i]=a[i]%10;

    }
    s=b[0];
    for(i=1; i<=n-1; i++)
    {
        if(s!=b[i])
        {
            s=b[i];
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
