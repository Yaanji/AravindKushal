#include<stdio.h>
int main()
{
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	int sum=0;
	int i=1;
	while(i<=n)
{
	 sum=sum+i;
	 i++;
}
   printf("the sum is %d",sum);
   
}
