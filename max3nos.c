#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the element a :");
    scanf(" %d",&a);
    printf("Enter the element b :");
    scanf(" %d",&b);
    printf("Enter the element c :");
    scanf(" %d",&c);
    if(a>c)
    {
        if(a>b)
        printf("Max number is %d",a);
        else
        if(b>c)
        printf("Max number is %d",b);
    }
    else
    printf("Max number is %d",c);
    return 0;
}