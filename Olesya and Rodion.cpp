#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
using namespace std;
int main()
{
    int n,i,t;
    cin>>n>>t;
    if(t==10) {
        if(n==1)
            cout<<-1<<endl;
        else {
            for(i=0; i<n-1; i++) {
                cout<<1;
            }
            cout<<0<<endl;
        }
    } else {
        for(i=0; i<n; i++) {
            cout<<t;
        }
        cout<<endl;
    }
    return 0;
}


