#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers to swap: ");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("Before swap:a=%d,b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swap:a=%d,b=%d",a,b);
    return 0;
}
