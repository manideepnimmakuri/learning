#include<stdio.h>
int main()
{
	int a,b,x;
	printf("enter the a and b values\n");
	scanf("%d %d",&a,&b);
	while(1)
	{
		printf("enter 1 for addition\nenter 2 for subtraction\nenter 3 for multiplication\nenter 4 for division\n");
		scanf("%d",&x);
		switch(x)
		{
			case 1:
				printf("%d + %d = %d\n",a,b,a+b);
				break;
			case 2:
				printf("%d - %d = %d\n",a,b,a-b);
				break;
			case 3:
				printf("%d * %d = %d\n",a,b,a*b);
				break;
			case 4:
				printf("%d / %d = %d\n",a,b,a/b);
				break;
			default:
				printf("enter 1 to 4 options\n");
		}
	}
}
