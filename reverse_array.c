#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    int A[n]={1, 2 , 3, 4, 5, 6};
    for(int i=1;i<n;i++)
    {
        int temp=A[i];
        A[i]=A[n-i-1];
        A[n-i-1]=temp;
    }

    for(int i=0;i<n;i++)
    {
        printf("%d",A[i]);
    }
}