#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main()
{  int k;
	char plain[15],code[15];
  printf("Type your first name: ");
  scanf("%s",plain);
  printf("\nenter key ");
  scanf("%d",&k);
  printf("%d\n",plain[0]);
  int M=strlen(plain);
printf("\n%d\n",M);

     for (int i = 0; i < strlen(plain); i++)
     {
     	if(plain[i]<90)
     	code[i]=(plain[i]+k);
       
     	printf("%c",code[i]);
	
     }
     printf("\n");
}