#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;
    char term;
	printf("Welcome User To The Anonymus Intro Programme! Press 1 To Continue. \n");
	scanf("%d", &a);
	if (a==1)
	{
		printf("very well we may now proceed to the next step.\n for the next step you will be asked to enter a number. \n this is basically a demo beginners calculator here.\nPlease ENTER the first number. \n");
		scanf("%d", &b);
	printf("\n please enter the second number\n");
	scanf("%d", &c);
	printf("very well user. now for your satisfaction that your time is not being wasted \n and this is not a scam, the product, sum and difference respectively of the numbers entered are\n");
	printf("product=%d\n",b*c  );
	printf("sum=%d\n", b+c);
	printf("difference=%d\n" , b-c);
	
	printf("lets proceed\n. Press 1 to continue!");
	scanf("%d\n",d);
	if (d == 1)
	{
		printf("good job! enter the third number");
		
	}
	else
	
	{
		printf("error!");
		return 0;
	}
	scanf("%d" ,e);
	printf("the number entered by you is %d\n",e);
	}
	else
	{
		printf("error, try again!!!");
		return 0;
		
	}
	
	
	
	
}
