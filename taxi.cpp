#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,i,c1=0,c2=0,c3=0,c4=0,t=0,d=0;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]==1)
            c1++;
        else if(a[i]==2)
            c2++;
        else if(a[i]==3)
            c3++;
        else if(a[i]==4)
            c4++;
    }
    t=c4;
   while(c1!=0 && c3!=0)
    {
            c1--;
            c3--;
            t++;
    }
    if(c1==0 and c3!=0)
    {
        t=t+c3;
        c3=0;
    }
    t=t+c2/2;
    if(c2%2!=0)
    {
        if(c1<=2)
        {
            t=t+1;
            c2=0;
            c1=0;
        }
        else
        {
            c1=c1-2;
            t=t+1;
            c2=0;
        }
    }
    if(c1!=0)
    {
        t=t+c1/4;
        if(c1%4!=0)
        {
            t++;
        }
    }
    cout<<t<<endl;
    return 0;
}
