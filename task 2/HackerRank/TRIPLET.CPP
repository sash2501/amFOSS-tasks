//www.hackerrank.com/challenges/compare-the-triplets/problem
#include<iostream.h>
#include<conio.h>
int i;

void enter(int a[3])
{
for(i=0;i<3;i++)
{cin>>a[i];
if(a[i]>100)
{cout<<"\ntype again with points<=100\n";
i--;}
}
}


int main()
{clrscr();
int alice,bob,op,ex;
int al[3],bo[3];
do
{alice=0,bob=0;
cout<<"\nwhat do you want to do??\n1.enter the scores\n2.check the resuts\n";
cin>>op;
switch(op)
{
case 1: {//entering

cout<<"\nenter points for alice :\n";
enter(al);
cout<<"\nenter points for bob :\n";
enter(bo);
break;
}
case 2:{//compare

for(i=0;i<3;i++)
{
if(al[i]>bo[i])
alice++;
else if(bo[i]>al[i])
bob++;
}
cout<<"\nthe score is alice : bob : ";
cout<<alice<<": "<<bob;
}
default:"\nwrong option\n";
}
cout<<"\ndo you want to continue??(1/0) : ";
cin>>ex;
}while(ex);
getch();
return 0;
}


