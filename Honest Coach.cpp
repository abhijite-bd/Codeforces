#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
    int n,i,d,j,small,p;
    cin>>d;
    for(j=0; j<d; j++)
    {
        cin>>n;
        int c[n];
        for(i=0; i<n; i++)
        {
            cin>>c[i];
        }
        sort(c,c+n);
        small=c[1]-c[0];
        for(i=1; i<n-1; i++)
        {
            p=c[i+1]-c[i];
            if(p<small)
                small=p;
        }
        cout<<small<<endl;
    }
    return 0;
}
