// 3. Write a program to calculate sum of first N odd natural numbers

#include<stdio.h>
int main()
{
    int num,i,oddSum=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    for ( i = 0; i<num; i++)
        oddSum=oddSum+(2*i+1);
    printf("Sum of first %d odd natural numbers = %d",num,oddSum);

    return 0;
}