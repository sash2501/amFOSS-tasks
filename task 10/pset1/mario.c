#include<stdio.h>
void main()
{
	printf("\nEnter the height of pyramid:  ");
        int n;
	scanf("%d", &n);
        if(n>0 && n<24)
	{
		for(int i=0;i<n;i++)
		{       for(int j=0;j<n;j++)
			{ if(j>=(n-1-i))
			       	printf ("#");
			  else
		                printf(" ");
			}
			printf("\n");
		}
	}
	else
		printf("\nWrong input\n");
}
