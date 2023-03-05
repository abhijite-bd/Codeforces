#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
    int i,n,temp,sum1=0,sum2=0,k,l;
    cin>>l;
    for(int j=0; j<l; j++)
    {
        cin>>n>>k;
        int a[n],b[n];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<n; i++)
        {
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        int m=n;
        for(i=0; i<k; i++)
        {
            if(a[i]<b[m-1])
            {
                temp=a[i];
                a[i]=b[m-1];
                b[m-1]=temp;
                m--;
            }
        }
        for(i=0; i<n; i++)
        {
            sum1+=a[i];
        }
        cout<<sum1<<endl;
        sum1=0;
    }
    return 0;
}
