#include<stdio.h>
int main(void)
{
char arr[20];
printf("enter a string");
scanf("%s",&arr);
if(isalnum(arr))
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
