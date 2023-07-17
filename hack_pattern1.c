#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n,m=0;
    printf("Enter the number");
    scanf("%d",&n);
    m=2*n-1;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=m;j++)
        {
            if((i==1|| i==m)||(j==1 || j==m))
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