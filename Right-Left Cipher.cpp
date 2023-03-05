#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<array>
#include<vector>
#include<deque>
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
    int n,i,j=0,k=0;
    string s,s1="\0",s2="\0";
    cin>>s;
    n=s.size();
    s1=s.substr(0,(n+1)/2);
    s2=s.substr((n+1)/2,n-(n+1)/2);
    reverse(s1.begin(),s1.end());
//    reverse(s2.begin(),s2.end());
//    cout<<s1<<endl;
//    cout<<s2<<endl;
    for(i=0; i<n; i++) {
        if(i%2==0) {
            cout<<s1[j];
            j++;
        } else {
            cout<<s2[k];
            k++;
        }
    }
    cout<<endl;
    return 0;
}
