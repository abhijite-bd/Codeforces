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
    int n,i,c=0,d=0;
    string s,v,w;
    cin>>n;
    cin>>s;
    v=s;
    for(i=1; i<n; i++) {
        cin>>s;
        if(s==v)
            c++;
        else {
            w=s;
            d++;
        }
    }
    if(c>=d)
        cout<<v<<endl;
    else
        cout<<w<<endl;
    return 0;
}
