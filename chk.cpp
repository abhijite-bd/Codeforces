#include <iostream>

using namespace std;

void Swap( int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int i,j,n,Min;
    cout<<"Enter n:";                 //taking the array size as input
    cin>>n;

    int A[n];
    cout<<"Enter "<<n<<"values:\n";
    for(i=0;i<n;i++)
        cin>>A[i];                    //taking the array values as input
    for(i=0;i<n-1;i++)                //printing the unsorted array
        cout<<A[i]<<" , ";
    cout<<A[i]<<endl;

    for(i=0;i<n-1;i++)                     //sorting block start
    {
        Min=i;                             //Assuming the first element as smallest number
        for(j=i+1;j<n;j++)
            if (A[j]<A[Min])
                Min=j;
        Swap(&A[i],&A[Min]);
    }

    for(i=0;i<n-1;i++)                   //printing the sorted array
        cout<<A[i]<<" , ";
    cout<<A[i];

  return 0;
}