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
    int t,n,i,j,red,blue,k;
    cin>>t;
    while(t--) {
        red=0;
        blue=0;
        k=0;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
//        sort(s1.begin(),s1.end());
//        sort(s2.begin(),s2.end());
//        if(s1==s2)
//            cout<<"EQUAL"<<endl;
//        else {
//
//            for(i=0; i<n-k; i++) {
//                for(j=0; j<n-k; j++) {
//                    if(s1[i]==s2[j]) {
//                        s1.erase(i-k);
//                        s2.erase(j-k);
//                        k++;
//                        cout<<s1<<endl<<s2<<endl;
//                        i--;
//                        j--;
//                        break;
//                    }
//                }
//            }
        for(i=0; i<n; i++) {
            if(s1[i]-'0'>s2[i]-'0')
                red++;
            else if(s1[i]-'0'<s2[i]-'0')
                blue++;
        }
        if(red>blue)
            cout<<"RED"<<endl;
        else if(blue>red)
            cout<<"BLUE"<<endl;
        else
            cout<<"EQUAL"<<endl;

    }
    return 0;
}
