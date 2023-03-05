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
    int n,i,c=0;
    cin>>n;
    for(i=1; i<n; i++) {
        if(n%i==0)
            c++;
    }
    cout<<c<<endl;
    return 0;
}
