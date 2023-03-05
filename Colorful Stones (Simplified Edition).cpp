#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<queue>
#include<set>
#define ll long long int
#define   gcd(a,b)   __gcd(a,b)
#define   lcm(a,b)   (a*b)/gcd(a,b)
#define ss " "
using namespace std;
int main()
{
    string s,t;
    cin>>s;
    cin>>t;
    int j=1,i;
    for(i=0; i<t.size(); i++) {
        if(t[i]==s[j-1])
            j++;
    }
    cout<<j<<endl;
    return 0;
}
