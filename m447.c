#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],i,n,large,small;
printf("How many elements:");
scanf("%d",&n);
printf("Enter the Array:");
scanf("%d",&a[i]);
{
for(i=0;i<n;++i)
large=small=a[0];
}
{
for(i=1;i<n;++i)
{
if(a[i]>large)
large=a[i];
if(a[i]<small)
small=a[i];
}
{
printf("The largest element is %d",large);
printf("\nThe smallest element is %d",small);}
getch();
}
