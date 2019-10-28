//codeforces.com/problemset/problem/1/A
#include<iostream.h>
#include<conio.h>
int main()
{clrscr();
int l=0,br=0,a=0;
cout<<"\nEnter the \nlength : ";
cin>>l;
cout<<"\nbreadth :";
cin>>br;
cout<<"\nEnter the side of tile:  ";
cin>>a;
int s1=0,s2=0,no=1;
s1=(l/a)+1;
s2=(br/a)+1;
no=s1*s2;
cout<<"\nThe no. of tiles needed  :"<<no;
getch();
return 0;
}

