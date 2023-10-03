#include<stdio.h>
int main()
{
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	int sum=0;
	int i=1;
do
{
	 sum=sum+i;
	 i++;
}
	 while(i<=n);

   printf("the sum is %d",sum);
   
}
