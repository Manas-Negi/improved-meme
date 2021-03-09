//two dimensional array two matrices and then their addition
#include<stdio.h>
int main()
{
	int array[10][10];
	int array2[10][10];
    int i,j,a,b;
    printf("\n\n\n\t\t\tTHIS IS A 2-D ARRAY\t\t\n\n\n");
    printf("Enter the elements for the array\n");
    for(i=0;i<3;i++)
    {
	    for(j=0;j<3;j++)
    {
    	 printf("Enter value for array[%d][%d]:", i, j);
    	scanf("%d",&array[i][j]);
    	
	}
	   
    }
     for(a=0;a<3;a++)
    {
	    for(b=0;b<3;b++)
    {
    	 printf("Enter value for array[%d][%d]:", a,b);
    	scanf("%d",&array2[a][b]);
    	
	}
	   
    }
    
    printf("ARRAY 1 IS:\n");
	 for(i=0;i<3;i++)
    {
	    for(j=0;j<3;j++)
    {
    	printf("%d ",array[i][j]);
	}
	    printf("\n");
    }
    printf("ARRAY 2 IS:\n");
     for(a=0;a<3;a++)
    {
	    for(b=0;b<3;b++)
    {
    	 
    	printf("%d ",array2[a][b]);
    	
	}
	printf("\n");
	   
    }
    printf("\nSUM OF BOTH THE ARRAYS IS\n:");
    for(i=0,a=0;i<3,a<3;i++,a++)
    {
    	for(j=0,b=0;j<3,b<3;j++,b++)
    	{
    		printf("%d ",array[i][j]+array2[i][j]);
		}
		printf("\n");
	}
	return 0;
}
