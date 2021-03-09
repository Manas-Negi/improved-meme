#include <stdio.h>

int main()
{
   int a[100000],n,i,b=0,c=0,j;
   printf("enter size of array: ");
   scanf("%d",&n);
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<2;i++)
    {
    	if(i%2==0)
    	{
    		for(i=0;i<n;i=i+2)
    		{
    			b+=a[i];
			}
			printf("sum of even index numbers: %d",b);
	}
}
	 
		
			for(i=1;i<n;i=i+2)
			{
				c+=a[i];
			}
			printf("sum of odd index numbers: %d",c);
		
	
   
   
   return 0;
}
