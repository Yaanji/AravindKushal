#include<stdio.h>
int main()
{
	int num;
	printf("enter the number");
	scanf("%d",&num);
{
	if
	(num>0&&num%2==0)
	printf("number %d is positive and even\n",num);
	
	else if
	(num<0&&num%2==0)
	printf("number %d is negative and even\n",num);
	
	
	else if
	(num>0&&num%2!=0)
	printf("number %d is positive and odd\n",num);

	else if 
	(num<0&&num%2!=0)
	printf("number %d is negative and odd\n",num);


	else
	printf("number %d is zero\n",num);
}

}

