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
    int n,i,g;
    long long int a;
    cin>>n;
    for(i=0; i<n; i++) {
        cin>>a;
        if(a & (a-1))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
