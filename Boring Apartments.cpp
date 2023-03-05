#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
    int a,d,r,j,i,c=1,s,n;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        if(a==1)
            cout<<1<<endl;
        else
        {
            while(1)
            {
                if(a<10)
                    break;
                a=a/10;
                c++;
            }
            if(c==2)
                c=3;
            else if(c==3)
                c=6;
            else if(c==4)
                c=10;
            cout<<(a-1)*10+c<<endl;
            c=1;
        }
    }
    return 0;
}
