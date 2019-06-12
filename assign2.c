#include<stdio.h>

int main(void)
{
    int x = 40;
    for (int i = 0; i < x; i++)
    {
        if (i % 3 !=0)
        {
         printf("%d,",i);  
        }
    }
    printf("%d",x);
}