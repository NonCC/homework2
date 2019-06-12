#include<stdio.h>

int main(void)
{
   int a,b,sum;
   sum=0;
   scanf("%d %d",&a,&b);
   if (a>b)
   {
   sum -= b;
   for (int i=b;i<a;i++)
   {
       sum += i;
   }
     printf("%d",sum);  
   }
   else if (b>a)
   {
   sum -= a;    
   for (int i=a;i<b;i++)
   {
       sum += i;
   }
   printf("%d",sum); 
   }
    return 0;
}