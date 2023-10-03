#include<stdio.h>
main()
{
	//data type array name[size];
	int a[5];
	int i,sum=0;
	printf("enter 5 elements\n");
	for(i=0;i<5;i++)
	 scanf("%d",&a[i]);
	 
	printf("the sum 5 elements are\n");
	for(i=0;i<5;i++)
	sum=sum+a[i];
	printf("%d\n",sum+a[i]);
}
