#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,*arr,i,*a,*b,*c,ar[1000];
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    for(i=0;i<=num;i++)
    {
      a = arr + i ;
      b = arr + (num-i);
      c=a;
      a=b;
      b=c;
      ar[i-1] = *a;
      ar[num-i-1] = *b;
    }
    /* Write the logic to reverse the array. */
    for(i=0;i<num;i++)
        printf("%d ",ar[i]);
    return 0;
}
