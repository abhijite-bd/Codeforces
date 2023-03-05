#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<queue>
#define ll long long int
using namespace std;
int main()
{
    int i,n,c=0,f=0;
    cin>>n;
    string s;
    cin>>s;
    for(i=0; i<n; i++) {
        if(s[i]=='x') {
            f++;
            if(f>=3)
                c++;
        } else
            f=0;
    }
    cout<<c<<endl;
    return 0;
}
