#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<queue>
#define ll long long int
#define   gcd(a,b)   __gcd(a,b)
#define   lcm(a,b)   (a*b)/gcd(a,b)
#define ss " "
using namespace std;
int main()
{
    string s;
    int n,i,j=0;
    cin>>n;
    cin>>s;
    for(i=0; i<n; i++) {
        cout<<s[i];
        j++;
        i+=j;
    }
    return 0;
}
