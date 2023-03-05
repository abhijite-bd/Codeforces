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
    int t,a,i,n;
    cin>>n;
    for(i=0; i<n; i++) {
        cin>>a;
        if(a%4==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
