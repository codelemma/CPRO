/*Determining the frequency of the numericsin a string*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int n,i,j=0,fd0,fd1=0,fd2=0,fd3=0,fd4=0,fd5=0,fd6=0,fd7=0,fd8=0,fd9=0;
    char buffer[1000];
    printf("Enter the string");
    scanf("%[^\n]%*c",buffer);
    //linear search;
    n=strlen(buffer);
        if(buffer==0)
        {
            fd0++;
        }
       /* else if(buffer==1)
        {
            fd1++;
        }
        else if(buffer==2)
        {
            fd2++;
        }
        else if(buffer==3)
        {
            fd3++;
        }
        else if(buffer==4)
        {
            fd4++;
        }
        else if(buffer==5)
        {
            fd5++;
        }
        else if(buffer==6)
        {
            fd6++;
        }
        else if(buffer==7)
        {
            fd7++;
        }
        else if(buffer==8)
        {
            fd8++;
        }
        else if(buffer==9)
        {
            fd9++;
        }
    printf("%d %d %d %d %d %d %d %d %d %d",fd0,fd1,fd2,fd3,fd4,fd5,fd6,fd7,fd8,fd9);*/
    printf("%d",fd0);
    return 0;
}