#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int m,n,sum,i,mi=10000,b;
    cin>>m>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=m; i<=n; i++)
    {
        mi=min(mi,abs(a[i-1]-a[i-m]));
//	cout<<a[i-1]<<" - "<<a[i-m]<<mi<<endl;
    }
    cout<<mi<<endl;
    return 0;
}
