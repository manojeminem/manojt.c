#include<stdio.h>
int main()
{
int a=6,b=3;
printf("a=%d,b=%d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("a=%d,b=%d",a,b);
}
