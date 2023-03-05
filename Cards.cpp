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
    int d,i,m=0,n=0;
    string s;
    cin>>d;
    cin>>s;
    for(i=0; i<d; i++) {
        if(s[i]=='z')
            n++;
        else if(s[i]=='n')
            m++;
    }
    for(i=0; i<m; i++) {
        cout<<1<<" ";
    }
    for(i=0; i<n; i++) {
        cout<<0<<" ";
    }
    return 0;
}
