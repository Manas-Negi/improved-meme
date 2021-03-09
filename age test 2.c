#include <stdio.h>
//function with return value and given arguments
int sum(int a,int b)
{printf("the sum is:%d ");
 return a+b;
}
int main()
{
	int i,j,c;
	printf("enter two numbers: ");
	scanf("%d %d",&i,&j);
    c= sum(i,j);
 //  printf("the sum is:%d ",c);
	return 0;
}

