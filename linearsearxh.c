#include<stdio.h>
#include<conio.h>
int main()
{
    int x,found=0,i,a[20],res,n;
    printf("This is the program for LINEAR SEARCH\n");
    printf("Enter  the number of the elements you have (Not more than 10 elements)\n");
    scanf("%d",&n);
    printf("Enter the array of the data you have one by one after pressing ENTER\n");
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
    printf("Enter the element you want to'SEARCH'\n");
    scanf("%d",&x);
    for(i=1;i<=n;i++)
    {
        if(x==a[i])
        {
          found=1;
          res=i;
        }
    }
    if(found==1)
    {
        printf("The element you searched for was found at the position %d",res);
    }
    else
    {
        printf("The element was not found");
    }
    return 0;
}