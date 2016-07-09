#include<stdio.h>
#include<math.h>
int main()
{
int n,a[100],i,sum=0;
printf("\n enter the size");
scanf("%d",&n);
printf("\n enter the elements in the array");
for(i=0;i<n;i++)
{printf("\n enter the element a[%d]",i);
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(i%2==0)
a[i]=pow(a[i],3);
else
a[i]=pow(a[i],2);
sum=sum+a[i];
}
printf("\n the sum of all the numbers are %d",sum);
return 0;
}
