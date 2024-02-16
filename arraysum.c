#include<stdio.h>
int main()
{
    int arr[100],i,n,sum=0;
    printf("Enter the size of a array :");
    scanf(" %d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the elements of a array :");
        scanf(" %d",&arr[i]);
    }
    for(i=0;i<n;i++)
    sum+=arr[i];
    printf("Sum of the elements is %d",sum);
    return 0;
}