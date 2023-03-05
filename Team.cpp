#include<iostream>
using namespace std;
int main()
{
    int n,c=0,a;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int sum=0;
        for(int j=0; j<3; j++)
        {
            cin>>a;
            if(a==1)
                sum+=1;
        }
        if(sum>=2)
            c++;
    }
    cout<<c<<endl;
    return 0;
}
