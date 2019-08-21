#include<iostream.h>
#include<conio.h>
int a,i,n;
int gcd(int p, int r)
{
int s;
while(p!=0)
{s=p;
p=r%p;
r=s;
}
return r;
}
int main()
{clrscr();
cout<<"\nEnter the integer:   ";
cin>>n;
a=1;
for(i=1;i<=n;i++)
{
a=(a*i)/gcd(a,i);
}
cout<<"\nthe answer is:   "<<a;
getch();
return 0;
}