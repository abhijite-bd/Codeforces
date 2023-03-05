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
    int n,i,mi,c=0,d=0;
    cin>>n;
    string s;
    cin>>s;
    for(i=0; i<n; i++) {
        if(s[i]=='1')
            c++;
        else
            d++;
    }
    mi=min(c,d);
    cout<<n-mi*2<<endl;
    return 0;
}
