#include<iostream>
using namespace std;
int main()
{
    int n,i,c=0,m=0,a;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        if(a==-1)
        {
            if(m>0)
            {
                m--;
            }
            else
                c++;
        }
        else
            m+=a;
    }
    cout<<c<<endl;
    return 0;
}
