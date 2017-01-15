#include<stdio.h>

int main()
{
	int i,j,n;
	
	printf("Enter the number : ");
	scanf("%d",&n);
	
	printf("\n");
	
		for(i=n;i>0;i--)
		{
			for (j=1;j<=n;j++)
			{
				if(j<i)
				{
					printf("  ");
				}
				else
				{
					printf(" |*|");
				}	
		}
		printf("\n");
	}
	return 0;
	}		

