#include <stdio.h>
#include <string.h>
int main()
{
	char num[100];
	int dec = 0, i, j, len;
	printf("Enter a number: ");
	scanf("%d",&num);
	len = strlen(num);
	for(i=0; i<len; i++){
		dec = dec * 10 + ( num[i] - '0' );
	}
	printf("%d", dec);
	return 0;
}
