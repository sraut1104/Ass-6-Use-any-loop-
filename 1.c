// 1. Write a program to calculate sum of first N natural numbers

#include<stdio.h>
int main()
{
    int num,i,sum=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    for ( i = 1; i<=num; i++)
        sum=sum+i;
    printf("Sum of first %d natural numbers = %d",num,sum);

    return 0;
}