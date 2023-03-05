#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
using namespace std;
void number (long a)
{
    long d,c=0,r,m,b[5],i=0;
    if(a<10)
    {
        cout<<1<<endl;
        cout<<a;
    }
    else
    {
        m=a;
        while(m!=0)
        {
            m=m/10;
            c++;
        }
        d=pow(10,c-1);
        c=0;
        while(a!=0)
        {
            b[i]=(a/d)*d;

            if(b[i]!=0)
                c++;
            a=a%d;
            i++;
            d/=10;

        }
        cout<<c<<endl;
        for(long j=0; j<i; j++)
        {
            if(b[j]==0)
                continue;
            cout<<b[j]<<" ";
        }
    }
    cout<<endl;
}
int main()
{
    int n,i;
    cin>>n;
    for(i=0; i<n; i++)
    {
        long a;
        cin>>a;
        number(a);
    }
    return 0;
}
