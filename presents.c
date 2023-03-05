#include<iostream>
using namespace std;
int main()
{
    int list[n],i,j;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>list[i];
    }
    for(j=1; j<=n; j++)
    {
        for(i=0; i<n; i++)
        {
            if(list[i]==j)
                cout<<i+1;
        }
    }
    return 0;
}
