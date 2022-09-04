// 8. Write a program to check whether a given number is a Prime number or not

#include<stdio.h>
int main()
{
    int a,i;
    printf("Enter a number: ");
    scanf("%d",&a);

        for(i=2;i<a;i++)
            if(a%i==0)
            {
                printf("Not Prime");
                break;
            }
        if(a==i)
            printf("Prime");

    return 0;
}