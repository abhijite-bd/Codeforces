#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<queue>
using namespace std;
int main()
{
    int n,i,a,b,s;
    cin>>n;
    for(i=0; i<n; i++) {
        cin>>a>>b;
        if(a==b)
            cout<<0<<endl;
        else if(b>a) {
            s=b-a;
            if(s%2==1)
                cout<<1<<endl;
            else
                cout<<2<<endl;
        } else {
            s=a-b;
            if(s%2==0)
                cout<<1<<endl;
            else
                cout<<2<<endl;
        }
    }
    return 0;
}
