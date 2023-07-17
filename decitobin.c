 #include<stdio.h>
 int main()
 {
     int n,i,k,N,A[10],t;
     printf("Enter the number");
     scanf("%d",&n);
    for(i=0;i<10;i++)
     {
         k=n%2;
         n=n/2;
         A[i]=k;
         if(n==0)
         { 
             t=i;  
             break;
         } 
         A[t+1]=0;
     }
     
     for(i=t+1;i>0;i--)
     {
       printf("%d",A[i]);
     }
     return 0;
 }