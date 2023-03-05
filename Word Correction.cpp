#include<iostream>
#include<math.h>
#include<algorithm>
#include<string>
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
void ans(string s)
{
    int n=s.size(),i,j;
    for(i=0; i<n; i++) {
        if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u' or s[i]=='y') {
            if(s[i+1]=='a' or s[i+1]=='e' or s[i+1]=='i' or s[i+1]=='o' or s[i+1]=='u' or s[i+1]=='y') {
                s.erase(i+1,1);
                i--;
            }
        }
    }

    for(i=0; i<s.size(); i++) {
        cout<<s[i];
    }
    cout<<endl;

}
int main()
{
    int n;
    string s;
    cin>>n>>s;
    ans(s);
    return 0;
}
