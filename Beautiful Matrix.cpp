#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int i,j,m,n,d;
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            cin>>d;
            if(d==0)
                continue;
            else
            {
                m=abs(i-2);
                n=abs(j-2);
            }
        }
    }
    cout<<m+n<<endl;
    return 0;
}

