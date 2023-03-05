#include<iostream>
using namespace std;
int main()
{
    int n,t,i,e=0,o=0,v,a,j;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>n;
        e=0,o=0,v=0;
        for(j=0; j<n; j++) {
            cin>>a;
            if(a%2==j%2)
                continue;
            else {
                a%2==1?o++:e++;
            }
        }
        if(o==e)
            cout<<e<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}
