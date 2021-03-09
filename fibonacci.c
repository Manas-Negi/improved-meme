#include<stdio.h>
int main()
{
	int a=0,b=1,c;
	int i,n;
	printf("enter number upto which you want the fibonacci series\n");
	scanf("%d",&n);
	if(n==1)
	{printf("%d",a);
	}
	else if(n==2)
	{
		printf("%d \t %d",a,b);
	}
	else
	{
		printf("%d \t %d\t",a,b);
	    for(i=1;i<=n;i++)
	    {
	    	c=a+b;
	    	printf("%d",c);
	    	a=b;
	    	b=c;
	    	printf("\t");
		}
	
	}
	
	return 0;
}
