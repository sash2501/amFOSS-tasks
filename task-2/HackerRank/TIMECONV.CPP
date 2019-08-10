#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
int hour,min,sec;
char inp[3];
void enter()
{
cout<<"\nenter the time in AM/PM format 00:00:00 AM :";
cin>>hour;
cout<<":";
cin>>min;
cout<<":";
cin>>sec;
cout<<":";
gets(inp);
}
void change(int &hr,int &mn,int &sc,char ip)
{
if(ip=='p'||ip=='p')
{if(hr==12)
 {hr=0;}
else
{hr=hr+12;} }

cout<<"\nthe time in 24 hr format is :"<<hr<<": "<<mn<<":"<<sc<<"\n";
}
int main()
{clrscr();
int op,ch=0;
do
{clrscr();
cout<<"\nwhat do u wanna do??\n1.enter time in am/pm \n 2.convert time into 24 hr format\n3.exit\n";
cin>>ch;
switch(ch)
{
case 1:{enter();break;}
case 2:{change(hour,min,sec,inp);break;}
case 3:break;
default:"\nwrong option\n";
}
cout<<"continue(y/n)";
cin>>op;
}while(op=='y');
getch();
return 0;
}
