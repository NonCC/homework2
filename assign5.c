#include<stdio.h>

int main(void)
{
    int x;
    do
    {
    scanf("%d",&x);
    if (x == 0)
    break;
    else if (x%2==0)
    {
    printf("even\n");
    }
    else if( x%2!=0)
    {
    printf("odd\n");    
    }
    else
    {
    printf("error");
    }
    
    } while (x != 0);
    printf("End");
 return 0;   
}
