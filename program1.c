#include<stdio.h>
#include<conio.h>
int main
{
    float p,r,n;
    float Am,Si;
    printf("Enter the priniciple amount\n");
    scanf("%f",&p);
    printf("Enter the rate of the intrest\n");
    scnaf("%f",&r);
    printf("Enter the number of years");
    scanf("%f",&n);
    Si=(p*r*n)/100;
    Am=Si+p;
    printf("The simple intrest of the principle given is :%f\n",Si);
    printf("The total amount to be paid back is :%f",Am);
    printf("\n******");
    return 0;
}
