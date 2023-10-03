#include<stdio.h>
main()
{
	//data type array name[size];
	int a[5];
	int i;
	printf("enter 5 elements\n");
	for(i=0;i<5;i++)
	 scanf("%d",&a[i]);
	 
	printf("the 5 elements are\n");
	for(i=0;i<5;i++)
	printf("%d\n",a[i]);
}
