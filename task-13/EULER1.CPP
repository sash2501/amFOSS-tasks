#include<iostream.h>
#include<conio.h>
int i,j,n[20],a,add[20];
int main()
{clrscr();
cout<<"\nEnter the number of times  :";
cin>>a;
for(j=0;j<a;j++)
{cout<<"\n int  " <<j+1<<" ";
cin>>n[j];
}
for(j=0;j<a;j++)
{ add[j]=0;
for(i=0;i<n[j];i++)
{if((i%3==0)||(i%5==0))

{add[j]=add[j]+i; }
}
}
for(j=0;j<a;j++)
{
cout<<"\nThe addition is :"<<add[j];

}
getch();
return 0;
}
