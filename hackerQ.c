#include<stdio.h>
int main()
{
    char ch,s,sen[100];
    scanf("%c",&ch);
    scanf("\n");
    scanf("%[^\n]c",&s);
    scanf("\n");
    scanf("%[^\n]c",&sen);
    printf("%c",ch);
    printf("%[^\n]c",s);
    printf("%[^\n]c",sen);

}