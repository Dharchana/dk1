#include<stdio.h>
#inlcude<conio.h>
int main()

{
	int n,num,digit,count=0,rev=0;
	clrscr();
	printf("\n Enter the number to be reversed:"0;
	scanf("%d",&n);
	num=n;
	while(n>0)
	{
	    n=n/10;
	    count++;	
	}
	while(num>0)
	{
	    digit=num%10;
	    rev=rev+(digit*(pow(10,count-1)));
	    num=num/10;
	}
	printf("\n Reverse of given number is %d",rev);
	getch();
 	return 0;
}
