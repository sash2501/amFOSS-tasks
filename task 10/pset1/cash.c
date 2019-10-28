#include<stdio.h>
void main()
{
	int due;
	int quarter,dime,nickels,pennies;
	printf("\nEnter the total due  ");
	scanf("%d", &due);
	
		quarter=due/25;
		dime=(due%25)/10;
		nickels=((due%25)%10)/5;
		pennies=((due%25)%10)%5;
		printf("%d quarter\n",quarter);
		printf("%d dime\n",dime);
		printf("%d nickels\n",nickels);
		printf("%d pennies\n",pennies);
		int total=dime+quarter+nickels+pennies;
		printf("%d total coins \n",total);
	
}