//www.hackerrank.com/challenges/birthday-cake-candles/problem
#include<iostream.h>
#include<conio.h>
int a,i,can[20];

int max=0,score;

int main()
{clrscr();
int op,ex;
do
{score=0;
cout<<"What do you want to do :\n1.enter age\n2.check success\n";
cin>>op;
switch(op)
{
case 1:{cout<<"\nWhat is her age:) ?? :";
	cin>>a;
	 cout<<"\nEnter the height of candles :\n";
	for(i=0;i<a;i++)
	{
	cin>>can[i];}
	break;
       }
case 2:{max=can[0];
       for(i=0;i<a;i++)
      {
      if(max<can[i])
       max=can[i];
       }
       cout<<"\nMax height is  "<<max;
       for(i=0;i<a;i++)
	 {if(max==can[i])
	 score++;
	  }
	  cout<<"\nThe success rate is : "<<score;break;
       }
default:{break;}
}
cout<<"\nContinue(1/0)";
cin>>ex;
}while(ex);
getch();
return 0;
}
