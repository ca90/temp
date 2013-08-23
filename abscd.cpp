#include<stdio.h>
#include<conio.h>

void main()

{
int a,b,c;
c=a+b;
cout<<"Added is "<<c;
c=a*b;
cout<<"Multiplication is "<<c;
if (b!=0)
{
  c=a/b;
  cout<<"Division is "<<c;
}
else
  cout<<"Invalid";

}
