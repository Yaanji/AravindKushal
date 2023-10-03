#include<stdio.h>
main()
{
	int a,b;
	printf("Enter Two Numbers:\n");
	scanf("%d",&a);//5
	scanf("%d",&b);//2
	
	printf("Division: %d\n",a/b);
	printf("Division: %f\n",a/b);
	printf("Division: %d\n",a/(float)b);
	printf("Division: %f\n",a/(float)b);
}
