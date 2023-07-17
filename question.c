#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    float k;
    clrscr();
    printf("Enter the number of classes you attended");
    scnaf("%d",&i);
    printf("Enter the total number of classes held");
    scanf("%d",&j);
    k=(i/j)*100;
    printf("Yours total attendance is %d",k);
    if(k>=0)
    {
        printf("You are eleigible to sit in the examinations");
    }
    else
    {
        printf("You are not eleigible to sit in the examination");
    }
    getch();
}
