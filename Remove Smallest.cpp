#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
void num(int a[],int n)
{
    int flag=0;
    if(n!=1)
    {
        for(int k=0; k<n-1; k++)
        {
            int d = abs(a[k]-a[k+1]);
            if(d>1)
            {
                flag++;
                break;
            }
        }
    }
    if(flag==0)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}
int main()
{
    int i,j,n,m;
    cin>>m;
    for(i=0; i<m; i++)
    {
        cin>>n;
        int a[n];
        for(j=0; j<n; j++)
        {
            cin>>a[j];
        }
        sort(a,a+n);
        num(a,n);
    }
    return 0;
}
