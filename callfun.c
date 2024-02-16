#include<stdio.h>
int find(int);
int main()
{
    int a;
    printf("Enter the number :");
    scanf("%d",&a);
    if(find(a))
    printf("is even ");
    else
    printf("is odd ");
}
int find(int x)
{
    if(x%2==0){
     printf("%d ",x);
    }
     else
     printf("%d ",x);
   
}