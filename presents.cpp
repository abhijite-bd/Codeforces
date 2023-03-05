#include<iostream>
using namespace std;
int main()
{
    int s[101],g[101],i,n;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>s[i];
        g[s[i]]=i;
    }
      for(i=1; i<=n; i++)
    {
        cout<<g[i]<<" ";
    }
    cout<<endl;
    return 0;
}
