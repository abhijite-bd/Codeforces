#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<queue>
#include<set>
#define   ll long long int
#define   gcd(a,b)   __gcd(a,b)
#define   lcm(a,b)   (a*b)/gcd(a,b)
#define   ss " "
#define   fast()   ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define   max3(a,b,c) max(max(a,b),c)
#define   min3(a,b,c) min(min(a,b),c)
using namespace std;
int main()
{
    string s1,s2,s3;

    cin>>s1;
    cin>>s2;
    cin>>s3;
    int i,n=s3.size(),j;

    for(i=0; i<n; i++) {
        if(s3[i]<=122 and s3[i] >=65) {
            for(j=0; j<26; j++) {
                if(tolower(s3[i])==s1[j]) {
                    int f=isupper(s3[i]);
                    if(f==1)
                        cout<<(char)toupper(s2[j]);
                    else
                        cout<<s2[j];
                }
            }
        } else
            cout<<s3[i];
    }
    return 0;
}
