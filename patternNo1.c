#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n,k=1;
    printf("Enter the number of lines of pattern you want to print\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(2*n);j++)
        {
            printf("@ @")
        }
    }
    return 0;
}