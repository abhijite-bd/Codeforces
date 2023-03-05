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
    int n,a,i,s=0;
    string s1,s2;
    cin>>n;
    cin>>s1>>s2;
    for(i=0; i<n; i++) {
        s+=min(abs(s1[i]-s2[i]),(10-abs(s1[i]-s2[i])));
    }
    cout<<s<<endl;
    return 0;
}
