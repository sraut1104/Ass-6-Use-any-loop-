// 5. Write a program to calculate sum of cubes of first N natural numbers

#include<stdio.h>
int main()
{
    int num,i,cubeSum=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    for ( i = 1; i<=num; i++)
        cubeSum=cubeSum+i*i*i;
    printf("Sum of square of first %d natural numbers = %d",num,cubeSum);

    return 0;
}