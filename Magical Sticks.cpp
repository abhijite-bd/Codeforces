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
    int a,n,i,s,r;
    cin>>n;
    for(i=0; i<n; i++) {
        cin>>a;
        s=0;
        s=a/2;
        if(a%2==1)
            s++;
        cout<<s<<endl;

    }
    return 0;
}
