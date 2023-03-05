#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char arr[100];
    gets(arr);
    int n=strlen(arr);
    cout<<n<<endl;
    int i,j,temp,count=1;
    for(i=1; i<n; i++)
    {
        temp=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j-=1;
        }
        arr[j+1]=temp;
    }
    for(i=1; i<n; i++)
    {
        if(arr[i-1]!=arr[i])
            count++;
    }
    if(count%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;
    return 0;
}
