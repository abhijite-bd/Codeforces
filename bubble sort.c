#include<stdio.h>

void sort(int n,int x[])
{

    int temp,j,i;
    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-1-i; j++) {
            if(x[j] > x[j+1]) {
                temp = x[j];
                x[j] = x[j+1];
                x[j+1] = temp;
            }
        }
    }

}

int main()
{
    int i;
    int A[5]= {30,50,80,65,24};
    printf("Before sorting : ");
    for(i = 0; i < 5; i++)
        printf("%d ", A[i]);
    printf("\n");
    sort(5, A);
    printf("After sorting :");
    for(i = 0; i < 5; i++)
        printf("%d ", A[i]);
    printf("\n");
    return 0;
}
