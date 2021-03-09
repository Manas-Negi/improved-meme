#include<stdio.h>
int main()
{
    /* now let us learn about do while loop*/
    /*In do while loops also the loop execution is terminated on the basis of test condition. The main difference between do while loop and while loop is in do while loop the condition is tested at the end of loop body, i.e do while loop is exit controlled whereas the other two loops are entry controlled loops.
Note: In do while loop the loop body will execute at least once irrespective of test condition.

*/
    int a,i=0;
    printf("enter a number and i will print nnumbers from 0 to that number.\n");
    scanf("%d",&a);
    do//no condition is given here
    {
    	printf("the first number is %d\n",i);//since no condition is given here, once the loop will be executed.
    	i++;
	}
	while(i<a);//notice in while loop there is no semi colon after condition but here it is.
	return 0;	
	
}
