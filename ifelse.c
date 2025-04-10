#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a and b value\n");
	scanf("%d %d",&a,&b);
	if(a>b)
		printf("a=%d is greater than b=%d\n",a,b);
	else
		printf("b=%d is greater than a=%d\n",b,a);
	return 0;
}
