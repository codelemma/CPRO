#include<stdio.h>
#include<conio.h>
int main()
{
    int i,k,j,l,n;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;

}