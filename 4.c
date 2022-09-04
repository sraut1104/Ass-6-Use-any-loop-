// 4. Write a program to calculate sum of squares of first N natural numbers

#include<stdio.h>
int main()
{
    int num,i,squareSum=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    for ( i = 1; i<=num; i++)
        squareSum=squareSum+i*i;
    printf("Sum of square of first %d natural numbers = %d",num,squareSum);

    return 0;
}