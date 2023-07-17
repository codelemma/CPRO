#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n,m=0;
    printf("Enter the number");
    scanf("%d",&n);
    if(n%2==0)
    {
        m=n+1;
    }
    else
    {
        m=n+2;
    }
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=m;j++)
        {
            if((i==1|| i==n)||(j==1 || j==n))
            {
                printf("%d",n);
            }
            else
            {
                printf("%d",n-1);
            }
        }
        printf("\n");
    }
    return 0;
}