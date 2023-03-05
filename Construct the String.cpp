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
    int t,i,a,b,n,j;
    char c='a';

    cin>>t;
    for(i=0; i<t; i++) {
        cin>>n>>a>>b;
        char s[n];
        for(j=0; j<n; j++) {
            s[j]=c+j%b;
        }
        for(int k=0; k<n; k++) {
            printf("%c",s[k]);
        }
        cout<<endl;
    }
    return 0;
}
