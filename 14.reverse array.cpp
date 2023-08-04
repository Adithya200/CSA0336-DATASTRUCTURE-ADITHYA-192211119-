#include <stdio.h>
int main()
{   int n,arr[100],i;
	printf("enter size of array\n");
	scanf ("%d",&n);
	printf ("enter the elements in an array\n");
	for (i=0;i<n;i++)
	{ scanf ("%d",&arr[i]);
	}
	printf("Real Array :  \n");
	for (i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
		printf("\n");
		printf("Reversed Array :  \n");
		for (i=n-1;i>=0;i--)
		{
		printf("%d ",arr[i]);
	    }
	    return 0;
}
