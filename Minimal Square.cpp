#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,i,num[2],a;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>num[0]>>num[1];
        sort(num,num+2);
        if(num[0]*2>num[1])
            cout<<4*num[0]*num[0]<<endl;
        else
            cout<<num[1]*num[1]<<endl;
    }
    return 0;
}
