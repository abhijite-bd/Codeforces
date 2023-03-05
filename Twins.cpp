#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,sum=0,i,nxt=0,c=0;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    sort(a,a+n);
    sum=sum/2;
    for(i=n-1; i>=0; i--)
    {
        nxt+=a[i];
        c++;
        if(nxt>sum)
            break;
    }
    cout<<c<<endl;
    return 0;
}
