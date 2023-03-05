#include<bits/stdc++.h>
#define   ll long long int
#define   gcd(a,b)   __gcd(a,b)
#define   lcm(a,b)   (a*b)/gcd(a,b)
#define   ss " "
#define   fast()   ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define   max3(a,b,c) max(max(a,b),c)
#define   min3(a,b,c) min(min(a,b),c)
#define   pb push_back
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int i,n=4,bull=0,cow=0,j;
    for(i=0; i<n; i++) {
        if(s1[i]==s2[i])
            bull++;
    }
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            if(s1[i]==s2[j] and i!=j)
                cow++;
        }

    }
    cout<<bull<<ss<<cow<<endl;
    return 0;
}
