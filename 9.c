// 9. Write a program to calculate LCM of two numbers

#include<stdio.h>

int main()
{
    int a,b,max,min,i,j,L;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    if(a>b)
        max=a;
    else
        max=b;
    if(a<b)
        min=a;
    else
        min=b;
    for(i=1;i<=min;i++)
        {
         for(j=1;j<=max;j++)
            if(max*i==min*j)
            {
                L=max*i;
                break;
            }
          if(max*i==min*j)
            break;
        }
    printf("LCM is %d",L);

    return 0;
}