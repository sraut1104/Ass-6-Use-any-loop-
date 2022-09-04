// 10. Write a program to reverse a given number


#include<stdio.h>
int main()
{
    int a,sum=0,b;
    printf("Enter a number: ");
    scanf("%d",&a);
    while(a%10)
    {
        b=a%10;
        a=a/10;
        printf("%d",b);
    }

    return 0;
}