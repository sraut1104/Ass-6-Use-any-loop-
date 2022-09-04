// 2. Write a program to calculate sum of first N even natural numbers

#include<stdio.h>
int main()
{
    int num,i,evenSum=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    for ( i = 1; i<=num; i++)
        evenSum=evenSum+2*i;
    printf("Sum of first %d even natural numbers = %d",num,evenSum);

    return 0;
}