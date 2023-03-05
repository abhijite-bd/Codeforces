#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
    int n,i,j,a;
    long int sum=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        for(j=1; j<=a; j++)
        {
            if(j<a/2 or j==a)
                sum+=pow(2,j);
            else
                sum-=pow(2,j);
        }
        if(sum<0)
            cout<<sum*(-1)<<endl;
        else
            cout<<sum<<endl;
        sum=0;
    }
    return 0;
}
