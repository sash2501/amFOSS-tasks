//www.hackerrank.com/challenges/staircase/problem
#include<iostream.h>
#include<conio.h>
char* a[100][100];
int n=0,i,j;
int enter()
{cout<<"\nEnter no. of steps of staircase???\n";
cin>>n;
return n;}
void show(int m)
{for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{if((j+i)>=m-1)
a[i][j]="#";
else
a[i][j]=" ";}
}
cout<<"\nThe staircase is:\n";
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
cout<<a[i][j];
}
cout<<endl;
}
}
void main()
{clrscr();
int op,c;
char ex;
do
{clrscr();
cout<<"\nWhat do u wanna do??\n1.Enter no. of steps\n2.Show the staircase\n";
cin>>op;
switch(op)
{case 1:c=enter();break;
 case 2:show(c);break;
 default:break;
 }
cout<<"Do you wanna continue??(y/n)\n";
cin>>ex;
}while(ex=='y'||ex=='Y');
getch();
}