#include<stdio.h>

int main(void)
{
int w,x,y,z;
z=1;
printf("Input number: \n");
scanf("%d",&x);
printf("Table length: \n");
scanf("%d",&y);
printf("Multiplication of: %d\n",x);
do
{
    w=x * z;
    printf("%d * %d = %d\n",x,z,w);
    z =z+1;
} while (z<=y);
    return 0;
}