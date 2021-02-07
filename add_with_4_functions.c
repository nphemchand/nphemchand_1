//Write a program to add two user input numbers using 4 functions.

#include<stdio.h>
Float input()
{
  Float n;
  printf(“\n enter number:”);
  scanf(“%f”,&n);
  return n;
}
  Float sum (float a,float b)
{
   Float sum ;
   sum=a+b;
   Return sum;
}
void output (float n)
{
  printf(“\n the sum is %f”.n);
}
  Int main()
{
  Float x,y,z;
  x=input();
  y=input();
  z=input(x,y);
  output(z);
  Return0;
}
