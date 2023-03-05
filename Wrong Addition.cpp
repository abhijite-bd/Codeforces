#include<bits/stdc++.h>
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
int main()
{
    int n1,t,n2,n,i,j,k;
    cin>>t;
    while(t--) {
        string s1,s2,ans="\0",ans2;
        cin>>s1>>s2;
        n1=s1.size();
        n2=s2.size();
        int flag=0;
        k=0;
//        reverse(s1.begin(),s1.end());
//        for(i=n1; i<n2; i++) {
//            s1+='0';
//        }
//        reverse(s1.begin(),s1.end());
//        cout<<s1<<endl;
        for(i=n1-1,j=n2-1; i>=0; i--,j--) {
            if(j<0) {
                flag=1;
                break;
            }
            if(s1[i]==s2[j])
                ans+='0';
            else if((s1[i]-'0')<(s2[j]-'0')) {
                int x=(s2[j]-'0')-(s1[i]-'0');
                ans+=to_string(x);
            } else {
                j--;
                if(j<0) {
                    flag=1;
                    break;
                } else if(s2[j]!='1') {
                    flag=1;
                    break;
                } else {
                    int x=(s2[j+1]-'0')-(s1[i]-'0')+10;
                    ans+=to_string(x);
                }
            }
        }
        reverse(ans.begin(),ans.end());
        if(flag)
            cout<<-1<<endl;
        else {
            ans2=s2.substr(0,j-i);
            int f=1;
            cout<<ans2;
            if(ans2.size()!=0)
                f=1;
            else
                f=0;
            n=ans.size();
            for(i=0; i<n; i++) {
                if(ans[i]!='0') {
                    cout<<ans[i];
                    f=1;
                } else {
                    if(f)
                        cout<<ans[i];
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
