#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main()
{int k;
	char mssg[15],kw[15];
  printf("\nType messege:    ");
  scanf("%s",mssg);
  printf("\nType the keyword ");
  scanf("%s",kw);



for (int i = 0; i < strlen(kw); i++)
     {if(isalpha(kw[i]))
     	if(isupper(kw[i]))
     		{kw[i]=kw[i]-65;
     	    printf("%d\n",kw[i]);}
     	else if(islower(kw[i]))
     		{kw[i]=kw[i]-97;
     	printf("%d\n",kw[i]);}
	
     }
 char crypto[50];
 for(int i=0,j=0;i<strlen(mssg);i++,j++)
    {   if(j>=strlen(kw))
        j=0;

        crypto[i]=mssg[i]+kw[j];
    }

 printf("%s\n",crypto);
}