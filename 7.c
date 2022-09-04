// 7. Write a program to count digits in a given number

#include<stdio.h>
int main()
{
    int a,count=1;
    printf("Enter a number: ");
    scanf("%d",&a);
    while(a/10)
    {
        a=a/10;
        count++;
    }
    printf("%d",count);

    return 0;
}