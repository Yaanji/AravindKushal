#include<stdio.h>
int main()
{
	int num1,num2,num3;
	printf("enter three number");
	scanf("%d",&num1);
	scanf("%d",&num2);
	scanf("%d",&num3);
	if (num1>num2&&num1>num3)
	printf("num1 is greater\n");
	
	else if (num2>num1&&num2>num3)
	printf("num2 is greater\n");
	
	else (num3>num2&&num3>num1);
	printf("num3 is greater");
}

