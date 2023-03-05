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
    int n,k,i,c=0,a;
    cin>>n>>k;
    for(i=0; i<n; i++) {
        cin>>a;
        if(a+k<=5)
            c++;
    }
    cout<<c/3<<endl;
    return 0;
}
