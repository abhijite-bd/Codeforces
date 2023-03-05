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
    int n,i,j,t;
    string s;
    cin>>t;
    for(i=0; i<t; i++) {
        cin>>n;
        cin>>s;
        for(j=0; j<2*n-1; j+=2) {
            cout<<s[j];
        }
        cout<<endl;
    }
    return 0;
}
