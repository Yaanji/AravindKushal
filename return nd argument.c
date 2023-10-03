//with return and argument type
#include<stdio.h>

int add(int,int);//declaration
main()
{
	int sum=add(2,4);//calling
    printf("the sum is %d\n",sum);
    	
}
int add(int a,int b)
{   
    return(a+b);
}
