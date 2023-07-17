#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the number a:");
    scanf("%d",&a);
    printf("Enter the number b:");
    scanf("%d",&b);
    printf("Enter the number c:");
    scanf("%d",&c);
    printf("Enter the number d:");
    scanf("%d",&d);
    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            {
                printf("Max = %d",a);
            }
            else
            {
                printf("Max = %d",d);
            }
        }
        else
        {
            if(c>d)
            {
                printf("Max = %d",c);
            }
            else
            {
                printf("Max = %d",d);
            }
        }
    }
    else
    {
        if(b>c)
        {
            if(b>d)
            {
                printf("Max = %d",b);
            }
            else
            {
                printf("Max = %d,d");
            }
        }
        else
        {
            if(c>d)
            {
                printf("Max = %d",c);
            }
            else
            {
                printf("Max = %d",d);
            }
        }
    }
 return 0;
} 