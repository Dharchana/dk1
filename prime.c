#include<stdio.h>
#inlcude<conio.h>
int main()
{
  int n1,n2,i,j,count;
  scanf("%d %d",n1,n2);
  for(j=n1;j<=n2;j++)
  {
    count=0;
    for(i=1;i<=j;i++)
    {
      if(j%i==0)
        count++;
    }
    if(count==2)
      printf("\n %d",j);
  }
  getch();
  return 0;
}
