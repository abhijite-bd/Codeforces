#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
    int n,i,j=0,k=0,l=0,q;
    cin>>n;
    int a[n],b[n],c[n];
    for(i=0; i<n; i++)
    {
        cin>>q;
        if(q==1)
        {
            a[j]=i+1;
                 j++;
        }
        else if(q==2)
        {
            b[k]=i+1;
            k++;
        }
        else
        {
            c[l]=i+1;
            l++;
        }
    }
    int m=min(j,k);
    m=min(m,l);
    cout<<m<<endl;
    for(i=0; i<m; i++)
    {
        cout<<a[i]<<" "<<b[i]<<" "<<c[i]<<endl;
    }
    return 0;
}
